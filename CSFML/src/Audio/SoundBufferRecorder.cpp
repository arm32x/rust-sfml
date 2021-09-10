
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2018 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//

// Headers

#include "Audio/SoundBufferRecorder.h"
#include <SFML/Audio/SoundBufferRecorder.hpp>
#include <cstddef>

sfSoundBufferRecorder *sfSoundBufferRecorder_create(void) {
    return reinterpret_cast<sfSoundBufferRecorder *>(new sf::SoundBufferRecorder);
}

void sfSoundBufferRecorder_destroy(sfSoundBufferRecorder *soundBufferRecorder) {
    delete reinterpret_cast<sf::SoundBufferRecorder *>(soundBufferRecorder);
}

sfBool sfSoundBufferRecorder_start(sfSoundBufferRecorder *soundBufferRecorder, unsigned int sampleRate) {
    return reinterpret_cast<sf::SoundBufferRecorder *>(soundBufferRecorder)->start(sampleRate);
}

void sfSoundBufferRecorder_stop(sfSoundBufferRecorder *soundBufferRecorder) {
    reinterpret_cast<sf::SoundBufferRecorder *>(soundBufferRecorder)->stop();
}

unsigned int sfSoundBufferRecorder_getSampleRate(const sfSoundBufferRecorder *soundBufferRecorder) {
    return reinterpret_cast<const sf::SoundBufferRecorder *>(soundBufferRecorder)->getSampleRate();
}

const sfSoundBuffer *sfSoundBufferRecorder_getBuffer(const sfSoundBufferRecorder *soundBufferRecorder) {
    const sf::SoundBuffer *buf = &reinterpret_cast<const sf::SoundBufferRecorder *>(soundBufferRecorder)->getBuffer();
    return reinterpret_cast<const sfSoundBuffer *>(buf);
}

sfBool sfSoundBufferRecorder_setDevice(sfSoundBufferRecorder *soundBufferRecorder, const char *name) {
    return reinterpret_cast<sf::SoundBufferRecorder *>(soundBufferRecorder)->setDevice(name);
}

const char *sfSoundBufferRecorder_getDevice(sfSoundBufferRecorder *soundBufferRecorder) {
    //reinterpret_cast<sf::SoundBufferRecorder*>(soundBufferRecorder)->getDevice();
    abort(); // TODO: Add SfStdString type
}