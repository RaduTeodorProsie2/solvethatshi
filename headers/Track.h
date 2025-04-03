#ifndef TRACK_H
#define TRACK_H

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Track {
    sf::String title;
    sf::Music instrumental, voices;

    void pause();
    void restart();
    void game_loop();

public:
    explicit Track(const std::string &title);

    void start();

    [[nodiscard]] sf::String get_title() const;

    /// SFML music is not copyable so we ought to make this class not copyable as well
    Track(const Track &) = delete;
    Track &operator=(const Track &) = delete;
};

#endif // TRACK_H
