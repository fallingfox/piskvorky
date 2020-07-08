#include "board.hpp"

// Konstruktor
Board::Board(const int width, const int height) : _width(width), _height(height) {
    if (!checkDimension(width, height)) {
        throw "Bad dimension!";
    }
    _stones = new Stone*[_width * _height] {nullptr};
}

// Destruktor
Board::~Board() {
    for (size_t i = 0, s = _width * _height; i < s; i++) {
        delete _stones[i];
    }
    delete[] _stones;
}

// Gettery
const int Board::getWidth() const {
    return _width;
}

const int Board::getHeight() const {
    return _height;
}

Stone* Board::getStone(const int x, const int y) const {
    if (!checkPosition(x, y)) throw "Bad position!";
    return _stones[_width * y + x];
}

// Settery
void Board::setStone(const int x, const int y, Stone* stone) {
    if (!checkPosition(x, y)) throw "Bad position!";
    if (getStone(x, y) != nullptr) throw "Position is occupied!";
    _stones[_width * y + x] = stone;
}

// Metody
bool Board::checkDimension(const int width, const int height) {
    return (width > 0 && height > 0);
}

bool Board::checkPosition(const int x, const int y) const {
    return (x >= 0 && x < _width && y >= 0 && y < _height);
}

// Operátory
std::ostream& operator<<(std::ostream& output, Board& board) {
    for (int y = 0, h = board.getHeight(); y < h; y++) {
        for (int x = 0, w = board.getWidth(); x < w; x++) {
            Stone* s = board.getStone(x, y);
            if (s != nullptr) output << *s;
            else output << ' ';
        }
        output << std::endl;
    }
    return output;
}