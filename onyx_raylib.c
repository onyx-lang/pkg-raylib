//
// THIS FILE WAS AUTOMATICALLY GENERATED.
//
#include <raylib.h>

#define ONYX_LIBRARY_NAME onyx_raylib
#include "onyx_library.h"

#define P(i, k) (params->data[i].of.k)

ONYX_DEF(InitWindow, (WASM_I32, WASM_I32, WASM_I32), ()) {
    InitWindow(P(0, i32), P(1, i32), ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(SetAudioStreamBufferSizeDefault, (WASM_I32), ()) {
    SetAudioStreamBufferSizeDefault(P(0, i32));
    return NULL;
}

ONYX_DEF(SetAudioStreamPan, (WASM_I32, WASM_F32), ()) {
    SetAudioStreamPan(*(AudioStream *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetAudioStreamPitch, (WASM_I32, WASM_F32), ()) {
    SetAudioStreamPitch(*(AudioStream *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetAudioStreamVolume, (WASM_I32, WASM_F32), ()) {
    SetAudioStreamVolume(*(AudioStream *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(StopAudioStream, (WASM_I32), ()) {
    StopAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsAudioStreamPlaying, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsAudioStreamPlaying(*(AudioStream *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(ResumeAudioStream, (WASM_I32), ()) {
    ResumeAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(PauseAudioStream, (WASM_I32), ()) {
    PauseAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(PlayAudioStream, (WASM_I32), ()) {
    PlayAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsAudioStreamProcessed, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsAudioStreamProcessed(*(AudioStream *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(UpdateAudioStream, (WASM_I32, WASM_I32, WASM_I32), ()) {
    UpdateAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(UnlodaAudioStream, (WASM_I32), ()) {
    UnlodaAudioStream(*(AudioStream *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsAudioStreamReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsAudioStreamReady(*(AudioStream *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadAudioStream, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(AudioStream *) ONYX_PTR(P(3, i32)) = LoadAudioStream(P(0, i32), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(GetMusicTimePlayed, (WASM_I32), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetMusicTimePlayed(*(Music *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetMusicTimeLength, (WASM_I32), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetMusicTimeLength(*(Music *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(SetMusicPan, (WASM_I32, WASM_F32), ()) {
    SetMusicPan(*(Music *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetMusicPitch, (WASM_I32, WASM_F32), ()) {
    SetMusicPitch(*(Music *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetMusicVolume, (WASM_I32, WASM_F32), ()) {
    SetMusicVolume(*(Music *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SeekMusicStream, (WASM_I32, WASM_F32), ()) {
    SeekMusicStream(*(Music *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ResumeMusicStream, (WASM_I32), ()) {
    ResumeMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(PauseMusicStream, (WASM_I32), ()) {
    PauseMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(StopMusicStream, (WASM_I32), ()) {
    StopMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UpdateMusicStream, (WASM_I32), ()) {
    UpdateMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsMusicStreamPlaying, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMusicStreamPlaying(*(Music *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(PlayMusicStream, (WASM_I32), ()) {
    PlayMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UnloadMusicStream, (WASM_I32), ()) {
    UnloadMusicStream(*(Music *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsMusicReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMusicReady(*(Music *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadMusicStreamFromMemory, (WASM_I32, WASM_I32,WASM_I32, WASM_I32), ()) {
    *(Music *) ONYX_PTR(P(3, i32)) = LoadMusicStreamFromMemory(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadMusicStream, (WASM_I32, WASM_I32), ()) {
    *(Music *) ONYX_PTR(P(1, i32)) = LoadMusicStream(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UnloadWaveSamples, (WASM_I64), ()) {
    UnloadWaveSamples(P(0, i64));
    return NULL;
}

ONYX_DEF(LoadWaveSamples, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadWaveSamples(*(Wave *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(WaveFormat, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    WaveFormat(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32));
    return NULL;
}

ONYX_DEF(WaveCrop, (WASM_I32, WASM_I32, WASM_I32), ()) {
    WaveCrop(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(WaveCopy, (WASM_I32, WASM_I32), ()) {
    *(Wave *) ONYX_PTR(P(1, i32)) = WaveCopy(*(Wave *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetSoundPan, (WASM_I32, WASM_F32), ()) {
    SetSoundPan(*(Sound *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetSoundPitch, (WASM_I32, WASM_F32), ()) {
    SetSoundPitch(*(Sound *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(SetSoundVolume, (WASM_I32, WASM_F32), ()) {
    SetSoundVolume(*(Sound *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(IsSoundPlaying, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsSoundPlaying(*(Sound *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(ResumeSound, (WASM_I32), ()) {
    ResumeSound(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(PauseSound, (WASM_I32), ()) {
    PauseSound(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(StopSound, (WASM_I32), ()) {
    StopSound(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(PlaySound, (WASM_I32), ()) {
    PlaySound(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ExportWaveAsCode, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ExportWaveAsCode(*(Wave *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(ExportWave, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ExportWave(*(Wave *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(UnloadSoundAlias, (WASM_I32), ()) {
    UnloadSoundAlias(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UnloadSound, (WASM_I32), ()) {
    UnloadSound(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UnloadWave, (WASM_I32), ()) {
    UnloadWave(*(Wave *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UpdateSound, (WASM_I32, WASM_I32, WASM_I32), ()) {
    UpdateSound(*(Sound *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(IsSoundReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsSoundReady(*(Sound *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadSoundAlias, (WASM_I32, WASM_I32), ()) {
    *(Sound *) ONYX_PTR(P(1, i32)) = LoadSoundAlias(*(Sound *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadSoundFromWave, (WASM_I32, WASM_I32), ()) {
    *(Sound *) ONYX_PTR(P(1, i32)) = LoadSoundFromWave(*(Wave *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadSound, (WASM_I32, WASM_I32), ()) {
    *(Sound *) ONYX_PTR(P(1, i32)) = LoadSound(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsWaveReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWaveReady(*(Wave *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadWaveFromMemory, (WASM_I32, WASM_I32,WASM_I32, WASM_I32), ()) {
    *(Wave *) ONYX_PTR(P(3, i32)) = LoadWaveFromMemory(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadWave, (WASM_I32, WASM_I32), ()) {
    *(Wave *) ONYX_PTR(P(1, i32)) = LoadWave(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMasterVolume, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetMasterVolume());
    return NULL;
}

ONYX_DEF(SetMasterVolume, (WASM_F32), ()) {
    SetMasterVolume(P(0, f32));
    return NULL;
}

ONYX_DEF(IsAudioDeviceReady, (), ()) {
    IsAudioDeviceReady();
    return NULL;
}

ONYX_DEF(CloseAudioDevice, (), ()) {
    CloseAudioDevice();
    return NULL;
}

ONYX_DEF(InitAudioDevice, (), ()) {
    InitAudioDevice();
    return NULL;
}

ONYX_DEF(UnloadModel, (WASM_I32), ()) {
    UnloadModel(*(Model *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsModelReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsModelReady(*(Model *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadModelFromMesh, (WASM_I32, WASM_I32), ()) {
    *(Model *) ONYX_PTR(P(1, i32)) = LoadModelFromMesh(*(Mesh *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadModel, (WASM_I32, WASM_I32), ()) {
    *(Model *) ONYX_PTR(P(1, i32)) = LoadModel(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(DrawGrid, (WASM_I32, WASM_F32), ()) {
    DrawGrid(P(0, i32), P(1, f32));
    return NULL;
}

ONYX_DEF(DrawRay, (WASM_I32, WASM_I32), ()) {
    DrawRay(*(Ray *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(DrawPlane, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawPlane(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCapsuleWires, (WASM_I32, WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawCapsuleWires(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), P(2, f32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCapsule, (WASM_I32, WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawCapsule(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), P(2, f32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCylinderWiresEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCylinderWiresEx(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCylinderWires, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCylinderWires(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCylinderEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCylinderEx(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCylinder, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCylinder(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawSphereWires, (WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawSphereWires(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawSphereEx, (WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawSphereEx(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawSphere, (WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawSphere(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCubeWiresV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawCubeWiresV(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCubeWires, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawCubeWires(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawCubeV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawCubeV(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCube, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawCube(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangleStrip3D, (WASM_I32,WASM_I32, WASM_I32), ()) {
    DrawTriangleStrip3D(ONYX_PTR(P(0, i32)), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangle3D, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTriangle3D(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), *(Vector3 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawCircle3D, (WASM_I32, WASM_F32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawCircle3D(*(Vector3 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Vector3 *) ONYX_PTR(P(2, i32)), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawPoint3D, (WASM_I32, WASM_I32), ()) {
    DrawPoint3D(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(DrawLine3D, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawLine3D(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(GetGlyphAtlasRec, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Rectangle *) ONYX_PTR(P(2, i32)) = GetGlyphAtlasRec(*(Font *) ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(GetGlyphInfo, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(GlyphInfo *) ONYX_PTR(P(2, i32)) = GetGlyphInfo(*(Font *) ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(GetGlyphIndex, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetGlyphIndex(*(Font *) ONYX_PTR(P(0, i32)), P(1, i32)));
    return NULL;
}

ONYX_DEF(MeasureTextEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(4, i32)) = MeasureTextEx(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, f32), P(3, f32));
    return NULL;
}

ONYX_DEF(MeasureText, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(MeasureText(ONYX_PTR(P(0, i32)), P(1, i32)));
    return NULL;
}

ONYX_DEF(SetTextLineSpacing, (WASM_I32), ()) {
    SetTextLineSpacing(P(0, i32));
    return NULL;
}

ONYX_DEF(DrawTextCodepoints, (WASM_I32, WASM_I32,WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawTextCodepoints(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32), P(5, f32), *(Color *) ONYX_PTR(P(6, i32)));
    return NULL;
}

ONYX_DEF(DrawTextCodepoint, (WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawTextCodepoint(*(Font *) ONYX_PTR(P(0, i32)), P(1, i32), *(Vector2 *) ONYX_PTR(P(2, i32)), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawTextPro, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawTextPro(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32), P(5, f32), P(6, f32), *(Color *) ONYX_PTR(P(7, i32)));
    return NULL;
}

ONYX_DEF(DrawTextEx, (WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawTextEx(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), P(3, f32), P(4, f32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawText, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawText(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawFPS, (WASM_I32, WASM_I32), ()) {
    DrawFPS(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(ExportFontAsCode, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ExportFontAsCode(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(UnloadFont, (WASM_I32), ()) {
    UnloadFont(*(Font *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UnloadFontData, (WASM_I64, WASM_I32), ()) {
    UnloadFontData(P(0, i64), P(1, i32));
    return NULL;
}

ONYX_DEF(GenImageFontAtlas, (WASM_I64, WASM_I32,WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(6, i32)) = GenImageFontAtlas(P(0, i64), ONYX_PTR(P(1, i32)), P(2, i32), P(3, i32), P(4, i32), P(5, i32));
    return NULL;
}

ONYX_DEF(LoadFontData, (WASM_I32,WASM_I32, WASM_I32, WASM_I32,WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadFontData(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), ONYX_PTR(P(3, i32)), P(4, i32), P(5, i32)));
    return NULL;
}

ONYX_DEF(IsFontReady, (WASM_I32), ()) {
    IsFontReady(*(Font *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadFontFromMemory, (WASM_I32, WASM_I32,WASM_I32, WASM_I32, WASM_I32,WASM_I32, WASM_I32), ()) {
    *(Font *) ONYX_PTR(P(6, i32)) = LoadFontFromMemory(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32), P(3, i32), ONYX_PTR(P(4, i32)), P(5, i32));
    return NULL;
}

ONYX_DEF(LoadFontFromImage, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Font *) ONYX_PTR(P(3, i32)) = LoadFontFromImage(*(Image *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadFontEx, (WASM_I32, WASM_I32, WASM_I32,WASM_I32, WASM_I32), ()) {
    *(Font *) ONYX_PTR(P(4, i32)) = LoadFontEx(ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32)), P(3, i32));
    return NULL;
}

ONYX_DEF(LoadFont, (WASM_I32, WASM_I32), ()) {
    *(Font *) ONYX_PTR(P(1, i32)) = LoadFont(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetFontDefault, (WASM_I32), ()) {
    *(Font *) ONYX_PTR(P(0, i32)) = GetFontDefault();
    return NULL;
}

ONYX_DEF(GetPixelDataSize, (WASM_I32, WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetPixelDataSize(P(0, i32), P(1, i32), P(2, i32)));
    return NULL;
}

ONYX_DEF(SetPixelColor, (WASM_I32, WASM_I32, WASM_I32), ()) {
    SetPixelColor(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(GetPixelColor, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = GetPixelColor(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(GetColor, (WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(1, i32)) = GetColor(P(0, i32));
    return NULL;
}

ONYX_DEF(ColorAlphaBlend, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(3, i32)) = ColorAlphaBlend(*(Color *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ColorAlpha, (WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = ColorAlpha(*(Color *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ColorContrast, (WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = ColorContrast(*(Color *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ColorBrightness, (WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = ColorBrightness(*(Color *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ColorTint, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = ColorTint(*(Color *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ColorFromHSV, (WASM_F32, WASM_F32, WASM_F32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(3, i32)) = ColorFromHSV(P(0, f32), P(1, f32), P(2, f32));
    return NULL;
}

ONYX_DEF(ColorToHSV, (WASM_I32, WASM_I32), ()) {
    *(Vector3 *) ONYX_PTR(P(1, i32)) = ColorToHSV(*(Color *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ColorFromNormalized, (WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(1, i32)) = ColorFromNormalized(*(Vector4 *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ColorNormalize, (WASM_I32, WASM_I32), ()) {
    *(Vector4 *) ONYX_PTR(P(1, i32)) = ColorNormalize(*(Color *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ColorToInt, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ColorToInt(*(Color *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(Fade, (WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(2, i32)) = Fade(*(Color *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(DrawTextureNPatch, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawTextureNPatch(*(Texture2D *) ONYX_PTR(P(0, i32)), *(NPatchInfo *) ONYX_PTR(P(1, i32)), *(Rectangle *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawTexturePro, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawTexturePro(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)), *(Rectangle *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawTextureRec, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTextureRec(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawTextureEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawTextureEx(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawTextureV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTextureV(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawTexture, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTexture(*(Texture2D *) ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(SetTextureWrap, (WASM_I32, WASM_I32), ()) {
    SetTextureWrap(*(Texture2D *) ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(SetTextureFilter, (WASM_I32, WASM_I32), ()) {
    SetTextureFilter(*(Texture2D *) ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(GenTextureMipmaps, (WASM_I32), ()) {
    GenTextureMipmaps(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(UpdateTextureRec, (WASM_I32, WASM_I32, WASM_I32), ()) {
    UpdateTextureRec(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)), ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(UpdateTexture, (WASM_I32, WASM_I32), ()) {
    UpdateTexture(*(Texture2D *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UnloadRenderTexture, (WASM_I32), ()) {
    UnloadRenderTexture(*(RenderTexture2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsRenderTextureReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsRenderTextureReady(*(RenderTexture2D *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(UnloadTexture, (WASM_I32), ()) {
    UnloadTexture(*(Texture2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsTextureReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsTextureReady(*(Texture2D *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadRenderTexture, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(RenderTexture2D *) ONYX_PTR(P(2, i32)) = LoadRenderTexture(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(LoadTextureCubemap, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Texture2D *) ONYX_PTR(P(2, i32)) = LoadTextureCubemap(*(Image *) ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(LoadTextureFromImage, (WASM_I32, WASM_I32), ()) {
    *(Texture2D *) ONYX_PTR(P(1, i32)) = LoadTextureFromImage(*(Image *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadTexture, (WASM_I32, WASM_I32), ()) {
    *(Texture2D *) ONYX_PTR(P(1, i32)) = LoadTexture(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawTextEx, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    ImageDrawTextEx(ONYX_PTR(P(0, i32)), *(Font *) ONYX_PTR(P(1, i32)), ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32), P(5, f32), *(Color *) ONYX_PTR(P(6, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawText, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawText(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(ImageDraw, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDraw(ONYX_PTR(P(0, i32)), *(Image *) ONYX_PTR(P(1, i32)), *(Rectangle *) ONYX_PTR(P(2, i32)), *(Rectangle *) ONYX_PTR(P(3, i32)), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawRectangleLines, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawRectangleLines(ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawRectangleRec, (WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawRectangleRec(ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawRectangleV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawRectangleV(ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawRectangle, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawRectangle(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawCircleLineV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawCircleLineV(ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawCircleLine, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawCircleLine(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawCircleV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawCircleV(ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawCircle, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawCircle(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawLineV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawLineV(ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawLine, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawLine(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawPixelV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawPixelV(ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ImageDrawPixel, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDrawPixel(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(ImageClearBackground, (WASM_I32, WASM_I32), ()) {
    ImageClearBackground(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(GetImageColor, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Color *) ONYX_PTR(P(3, i32)) = GetImageColor(*(Image *) ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(GetImageAlphaBorder, (WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Rectangle *) ONYX_PTR(P(2, i32)) = GetImageAlphaBorder(*(Image *) ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(UnloadImagePalette, (WASM_I64), ()) {
    UnloadImagePalette(P(0, i64));
    return NULL;
}

ONYX_DEF(UnloadImageColors, (WASM_I64), ()) {
    UnloadImageColors(P(0, i64));
    return NULL;
}

ONYX_DEF(LoadImagePalette, (WASM_I32, WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadImagePalette(*(Image *) ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(LoadImageColors, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadImageColors(*(Image *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(ImageColorReplace, (WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageColorReplace(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ImageColorBrightness, (WASM_I32, WASM_I32), ()) {
    ImageColorBrightness(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(ImageColorContract, (WASM_I32, WASM_F32), ()) {
    ImageColorContract(ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ImageColorGrayscale, (WASM_I32), ()) {
    ImageColorGrayscale(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageColorInvert, (WASM_I32), ()) {
    ImageColorInvert(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageColorTint, (WASM_I32, WASM_I32), ()) {
    ImageColorTint(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ImageRotateCCW, (WASM_I32), ()) {
    ImageRotateCCW(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageRotateCW, (WASM_I32), ()) {
    ImageRotateCW(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageRotate, (WASM_I32, WASM_I32), ()) {
    ImageRotate(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(ImageFlipHorizontal, (WASM_I32), ()) {
    ImageFlipHorizontal(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageFlipVertical, (WASM_I32), ()) {
    ImageFlipVertical(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageDither, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageDither(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), P(4, i32));
    return NULL;
}

ONYX_DEF(ImageMipmaps, (WASM_I32), ()) {
    ImageMipmaps(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageResizeCanvas, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageResizeCanvas(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(ImageResizeNN, (WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageResizeNN(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(ImageResize, (WASM_I32, WASM_I32, WASM_I32), ()) {
    ImageResize(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(ImageKernelConvolution, (WASM_I32, WASM_I32,WASM_I32), ()) {
    ImageKernelConvolution(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(ImageBlurGuassian, (WASM_I32, WASM_I32), ()) {
    ImageBlurGuassian(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(ImageAlphaPremultiply, (WASM_I32), ()) {
    ImageAlphaPremultiply(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ImageAlphaMask, (WASM_I32, WASM_I32), ()) {
    ImageAlphaMask(ONYX_PTR(P(0, i32)), *(Image *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ImageAlphaClear, (WASM_I32, WASM_I32, WASM_F32), ()) {
    ImageAlphaClear(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)), P(2, f32));
    return NULL;
}

ONYX_DEF(ImageAlphaCrop, (WASM_I32, WASM_F32), ()) {
    ImageAlphaCrop(ONYX_PTR(P(0, i32)), P(1, f32));
    return NULL;
}

ONYX_DEF(ImageCrop, (WASM_I32, WASM_I32), ()) {
    ImageCrop(ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ImageToPOT, (WASM_I32, WASM_I32), ()) {
    ImageToPOT(ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ImageFormat, (WASM_I32, WASM_I32), ()) {
    ImageFormat(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(ImageTextEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = ImageTextEx(*(Font *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(ImageText, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = ImageText(ONYX_PTR(P(0, i32)), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ImageFromImage, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(2, i32)) = ImageFromImage(*(Image *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(ImageCopy, (WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(1, i32)) = ImageCopy(*(Image *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GenImageText, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = GenImageText(P(0, i32), P(1, i32), ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(GenImageCellular, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = GenImageCellular(P(0, i32), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(GenImagePerlinNoise, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = GenImagePerlinNoise(P(0, i32), P(1, i32), P(2, i32), P(3, i32), P(4, f32));
    return NULL;
}

ONYX_DEF(GenImageWhiteNoise, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = GenImageWhiteNoise(P(0, i32), P(1, i32), P(2, f32));
    return NULL;
}

ONYX_DEF(GenImageChecked, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(6, i32)) = GenImageChecked(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(GenImageGradientSquare, (WASM_I32, WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = GenImageGradientSquare(P(0, i32), P(1, i32), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(GenImageGradientRadial, (WASM_I32, WASM_I32, WASM_F32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = GenImageGradientRadial(P(0, i32), P(1, i32), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(GenImageGradientLinear, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = GenImageGradientLinear(P(0, i32), P(1, i32), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(GenImageColor, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = GenImageColor(P(0, i32), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(ExportImageAsCode, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ExportImageAsCode(*(Image *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(ExportImageToMemory, (WASM_I32, WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) ExportImageToMemory(*(Image *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(ExportImage, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ExportImage(*(Image *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(UnloadImage, (WASM_I32), ()) {
    UnloadImage(*(Image *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsImageReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsImageReady(*(Image *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadImageFromScreen, (WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(0, i32)) = LoadImageFromScreen();
    return NULL;
}

ONYX_DEF(LoadImageFromTexture, (WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(1, i32)) = LoadImageFromTexture(*(Texture2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadImageFromMemory, (WASM_I32, WASM_I32,WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = LoadImageFromMemory(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadImageAnim, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(2, i32)) = LoadImageAnim(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(LoadImageSvg, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(3, i32)) = LoadImageSvg(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadImageRaw, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(5, i32)) = LoadImageRaw(ONYX_PTR(P(0, i32)), P(1, i32), P(2, i32), P(3, i32), P(4, i32));
    return NULL;
}

ONYX_DEF(LoadImage, (WASM_I32, WASM_I32), ()) {
    *(Image *) ONYX_PTR(P(1, i32)) = LoadImage(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetCollisionRec, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Rectangle *) ONYX_PTR(P(2, i32)) = GetCollisionRec(*(Rectangle *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(CheckCollisionPointLine, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionPointLine(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), P(3, i32)));
    return NULL;
}

ONYX_DEF(CheckCollisionLines, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionLines(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), ONYX_PTR(P(4, i32))));
    return NULL;
}

ONYX_DEF(CheckCollisionPointPoly, (WASM_I32, WASM_I32,WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionPointPoly(*(Vector2 *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32)));
    return NULL;
}

ONYX_DEF(CheckCollisionPointTriangle, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionPointTriangle(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32))));
    return NULL;
}

ONYX_DEF(CheckCollisionPointCircle, (WASM_I32, WASM_I32, WASM_F32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionPointCircle(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32)));
    return NULL;
}

ONYX_DEF(CheckCollisionPointRec, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionPointRec(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(CheckCollisionCircleRec, (WASM_I32, WASM_F32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionCircleRec(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Rectangle *) ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(CheckCollisionCircles, (WASM_I32, WASM_F32, WASM_I32, WASM_F32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionCircles(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Vector2 *) ONYX_PTR(P(2, i32)), P(3, f32)));
    return NULL;
}

ONYX_DEF(CheckCollisionRecs, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(CheckCollisionRecs(*(Rectangle *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(GetSplinePointBezierCubic, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(5, i32)) = GetSplinePointBezierCubic(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32));
    return NULL;
}

ONYX_DEF(GetSplinePointBezierQuad, (WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(4, i32)) = GetSplinePointBezierQuad(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), P(3, f32));
    return NULL;
}

ONYX_DEF(GetSplinePointCatmullRom, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(5, i32)) = GetSplinePointCatmullRom(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32));
    return NULL;
}

ONYX_DEF(GetSplinePointBasis, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(5, i32)) = GetSplinePointBasis(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Vector2 *) ONYX_PTR(P(3, i32)), P(4, f32));
    return NULL;
}

ONYX_DEF(GetSplinePointLinear, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(3, i32)) = GetSplinePointLinear(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32));
    return NULL;
}

ONYX_DEF(DrawPolyLinesEx, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawPolyLinesEx(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, i32), P(2, f32), P(3, f32), P(4, f32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawPolyLines, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawPolyLines(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, i32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawPoly, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawPoly(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, i32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangleStrip, (WASM_I32,WASM_I32, WASM_I32), ()) {
    DrawTriangleStrip(ONYX_PTR(P(0, i32)), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangleFan, (WASM_I32,WASM_I32, WASM_I32), ()) {
    DrawTriangleFan(ONYX_PTR(P(0, i32)), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangleLines, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTriangleLines(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawTriangle, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawTriangle(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Vector2 *) ONYX_PTR(P(2, i32)), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleRoundedLines, (WASM_I32, WASM_F32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawRectangleRoundedLines(*(Rectangle *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, i32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleRounded, (WASM_I32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawRectangleRounded(*(Rectangle *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, i32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleLinesEx, (WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawRectangleLinesEx(*(Rectangle *) ONYX_PTR(P(0, i32)), P(1, f32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleLines, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawRectangleLines(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleGradientH, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawRectangleGradientH(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleGradientV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawRectangleGradientV(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawRectanglePro, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawRectanglePro(*(Rectangle *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleRec, (WASM_I32, WASM_I32), ()) {
    DrawRectangleRec(*(Rectangle *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangleV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawRectangleV(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawRectangle, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawRectangle(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawRingLines, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawRingLines(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, f32), P(5, i32), *(Color *) ONYX_PTR(P(6, i32)));
    return NULL;
}

ONYX_DEF(DrawRing, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawRing(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, f32), P(5, i32), *(Color *) ONYX_PTR(P(6, i32)));
    return NULL;
}

ONYX_DEF(DrawEllipseLines, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawEllipseLines(P(0, i32), P(1, i32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawEllipse, (WASM_I32, WASM_I32, WASM_F32, WASM_F32, WASM_I32), ()) {
    DrawEllipse(P(0, i32), P(1, i32), P(2, f32), P(3, f32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawCirlceLinesV, (WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawCirlceLinesV(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCircleLines, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawCircleLines(P(0, i32), P(1, i32), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawCircleV, (WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawCircleV(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawCircleSectorLines, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCircleSectorLines(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCircleSector, (WASM_I32, WASM_F32, WASM_F32, WASM_F32, WASM_I32, WASM_I32), ()) {
    DrawCircleSector(*(Vector2 *) ONYX_PTR(P(0, i32)), P(1, f32), P(2, f32), P(3, f32), P(4, i32), *(Color *) ONYX_PTR(P(5, i32)));
    return NULL;
}

ONYX_DEF(DrawCircle, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawCircle(P(0, i32), P(1, i32), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawLineBezier, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawLineBezier(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawLineStrip, (WASM_I32,WASM_I32, WASM_I32), ()) {
    DrawLineStrip(ONYX_PTR(P(0, i32)), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawLineEx, (WASM_I32, WASM_I32, WASM_F32, WASM_I32), ()) {
    DrawLineEx(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), P(2, f32), *(Color *) ONYX_PTR(P(3, i32)));
    return NULL;
}

ONYX_DEF(DrawLineV, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawLineV(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Vector2 *) ONYX_PTR(P(1, i32)), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(DrawLine, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawLine(P(0, i32), P(1, i32), P(2, i32), P(3, i32), *(Color *) ONYX_PTR(P(4, i32)));
    return NULL;
}

ONYX_DEF(DrawPixelV, (WASM_I32, WASM_I32), ()) {
    DrawPixelV(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Color *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(DrawPixel, (WASM_I32, WASM_I32, WASM_I32), ()) {
    DrawPixel(P(0, i32), P(1, i32), *(Color *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(SetShapesTexture, (WASM_I32, WASM_I32), ()) {
    SetShapesTexture(*(Texture2D *) ONYX_PTR(P(0, i32)), *(Rectangle *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UpdateCameraPro, (WASM_I32, WASM_I32, WASM_I32, WASM_F32), ()) {
    UpdateCameraPro(ONYX_PTR(P(0, i32)), *(Vector3 *) ONYX_PTR(P(1, i32)), *(Vector3 *) ONYX_PTR(P(2, i32)), P(3, f32));
    return NULL;
}

ONYX_DEF(UpdateCamera, (WASM_I32, WASM_I32), ()) {
    UpdateCamera(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(GetGesturePinchAngle, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetGesturePinchAngle());
    return NULL;
}

ONYX_DEF(GetGesturePinchVector, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetGesturePinchVector();
    return NULL;
}

ONYX_DEF(GetGestureDragAngle, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetGestureDragAngle());
    return NULL;
}

ONYX_DEF(GetGestureDragVector, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetGestureDragVector();
    return NULL;
}

ONYX_DEF(GetGestureHoldDuration, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetGestureHoldDuration());
    return NULL;
}

ONYX_DEF(GetGestureDetected, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetGestureDetected());
    return NULL;
}

ONYX_DEF(IsGestureDetected, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGestureDetected(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetGesturesEnabled, (WASM_I32), ()) {
    SetGesturesEnabled(P(0, i32));
    return NULL;
}

ONYX_DEF(GetTouchPointCount, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetTouchPointCount());
    return NULL;
}

ONYX_DEF(GetTouchPointId, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetTouchPointId(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetTouchPosition, (WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(1, i32)) = GetTouchPosition(P(0, i32));
    return NULL;
}

ONYX_DEF(GetTouchY, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetTouchY());
    return NULL;
}

ONYX_DEF(GetTouchX, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetTouchX());
    return NULL;
}

ONYX_DEF(SetMouseCursor, (WASM_I32), ()) {
    SetMouseCursor(P(0, i32));
    return NULL;
}

ONYX_DEF(GetMouseWheelMoveV, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetMouseWheelMoveV();
    return NULL;
}

ONYX_DEF(GetMouseWheelMove, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetMouseWheelMove());
    return NULL;
}

ONYX_DEF(SetMouseScale, (WASM_F32, WASM_F32), ()) {
    SetMouseScale(P(0, f32), P(1, f32));
    return NULL;
}

ONYX_DEF(SetMouseOffset, (WASM_I32, WASM_I32), ()) {
    SetMouseOffset(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(SetMousePosition, (WASM_I32, WASM_I32), ()) {
    SetMousePosition(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(GetMouseDelta_, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetMouseDelta();
    return NULL;
}

ONYX_DEF(GetMousePosition_, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetMousePosition();
    return NULL;
}

ONYX_DEF(GetMouseY, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMouseY());
    return NULL;
}

ONYX_DEF(GetMouseX, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMouseX());
    return NULL;
}

ONYX_DEF(IsMouseButtonUp, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMouseButtonUp(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsMouseButtonReleased, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMouseButtonReleased(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsMouseButtonDown, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMouseButtonDown(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsMouseButtonPressed, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsMouseButtonPressed(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetGamepadMappings, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(SetGamepadMappings(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetGamepadAxisMovement, (WASM_I32, WASM_I32), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetGamepadAxisMovement(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(GetGamepadAxisCount, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetGamepadAxisCount(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetGamepadButtonPressed, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetGamepadButtonPressed());
    return NULL;
}

ONYX_DEF(IsGamepadButtonUp, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGamepadButtonUp(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(IsGamepadButtonRelased, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGamepadButtonRelased(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(IsGamepadButtonDown, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGamepadButtonDown(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(IsGamepadButtonPressed, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGamepadButtonPressed(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(GetGamepadName, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetGamepadName(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsGamepadAvailable, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsGamepadAvailable(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetExitKey, (WASM_I32), ()) {
    SetExitKey(P(0, i32));
    return NULL;
}

ONYX_DEF(GetCharPressed, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetCharPressed());
    return NULL;
}

ONYX_DEF(GetKeyPressed, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetKeyPressed());
    return NULL;
}

ONYX_DEF(IsKeyUp, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsKeyUp(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsKeyReleased, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsKeyReleased(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsKeyDown, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsKeyDown(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsKeyPressedRepeat, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsKeyPressedRepeat(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsKeyPressed, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsKeyPressed(P(0, i32)));
    return NULL;
}

ONYX_DEF(PlayAutomationEvent, (WASM_I32), ()) {
    PlayAutomationEvent(*(AutomationEvent *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(StopAutomationEventRecording, (), ()) {
    StopAutomationEventRecording();
    return NULL;
}

ONYX_DEF(StartAutomationEventRecording, (), ()) {
    StartAutomationEventRecording();
    return NULL;
}

ONYX_DEF(SetAutomationEventBaseFrame, (WASM_I32), ()) {
    SetAutomationEventBaseFrame(P(0, i32));
    return NULL;
}

ONYX_DEF(SetAutomationEventList, (WASM_I32), ()) {
    SetAutomationEventList(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(ExportAutomationEventList, (WASM_I32, WASM_I32), ()) {
    ExportAutomationEventList(*(AutomationEventList *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UnloadAutomationEventList, (WASM_I32), ()) {
    UnloadAutomationEventList(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadAutomationEventList, (WASM_I32, WASM_I32), ()) {
    *(AutomationEventList *) ONYX_PTR(P(1, i32)) = LoadAutomationEventList(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(DecodeDataBase64, (WASM_I32,WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) DecodeDataBase64(ONYX_PTR(P(0, i32)), P(1, i32)));
    return NULL;
}

ONYX_DEF(EncodeDataBase64, (WASM_I32,WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) EncodeDataBase64(ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(DecompressData, (WASM_I32,WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) DecompressData(ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(CompressData, (WASM_I32,WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) CompressData(ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32))));
    return NULL;
}

ONYX_DEF(GetFileModTime, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL(GetFileModTime(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(UnloadDroppedFiles, (WASM_I32), ()) {
    UnloadDroppedFiles(*(FilePathList *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadDroppedFiles, (WASM_I32), ()) {
    *(FilePathList *) ONYX_PTR(P(0, i32)) = LoadDroppedFiles();
    return NULL;
}

ONYX_DEF(IsFileDropped, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsFileDropped());
    return NULL;
}

ONYX_DEF(UnloadDirectoryFiles, (WASM_I32), ()) {
    UnloadDirectoryFiles(*(FilePathList *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadDirectoryFilesEx, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(FilePathList *) ONYX_PTR(P(3, i32)) = LoadDirectoryFilesEx(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(LoadDirectoryFiles, (WASM_I32, WASM_I32), ()) {
    *(FilePathList *) ONYX_PTR(P(1, i32)) = LoadDirectoryFiles(ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsPathFile, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsPathFile(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(ChangeDirectory, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(ChangeDirectory(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetApplicationDirectory, (), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetApplicationDirectory());
    return NULL;
}

ONYX_DEF(GetWoringDirectory, (), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetWoringDirectory());
    return NULL;
}

ONYX_DEF(GetPrevDirectoryPath, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetPrevDirectoryPath(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetDirectoryPath, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetDirectoryPath(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetFileNameWithoutExt, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetFileNameWithoutExt(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetFileName, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetFileName(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetFileExtension, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetFileExtension(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(GetFileLength, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetFileLength(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(IsFileExtension, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsFileExtension(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(DirectoryExists, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(DirectoryExists(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(FileExists, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(FileExists(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(SaveFileText, (WASM_I32, WASM_I32), ()) {
    SaveFileText(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UnloadFileText, (WASM_I64), ()) {
    UnloadFileText(P(0, i64));
    return NULL;
}

ONYX_DEF(LoadFileText, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadFileText(ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(ExportDataAsCode, (WASM_I32,WASM_I32, WASM_I32), ()) {
    ExportDataAsCode(ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(SaveFileData, (WASM_I32, WASM_I32,WASM_I32), ()) {
    SaveFileData(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)), P(2, i32));
    return NULL;
}

ONYX_DEF(UnloadFileData, (WASM_I64), ()) {
    UnloadFileData(P(0, i64));
    return NULL;
}

ONYX_DEF(LoadFileData, (WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadFileData(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(MemFree, (WASM_I64), ()) {
    MemFree(P(0, i64));
    return NULL;
}

ONYX_DEF(MemRealloc, (WASM_I64, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) MemRealloc(P(0, i64), P(1, i32)));
    return NULL;
}

ONYX_DEF(MemAlloc, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) MemAlloc(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetTraceLogLevel, (WASM_I32), ()) {
    SetTraceLogLevel(P(0, i32));
    return NULL;
}

ONYX_DEF(UnloadRandomSequence, (WASM_I64), ()) {
    UnloadRandomSequence(P(0, i64));
    return NULL;
}

ONYX_DEF(LoadRandomSequence, (WASM_I32, WASM_I32, WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) LoadRandomSequence(P(0, i32), P(1, i32), P(2, i32)));
    return NULL;
}

ONYX_DEF(GetRandomValue, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetRandomValue(P(0, i32), P(1, i32)));
    return NULL;
}

ONYX_DEF(SetRandomSeed, (WASM_I32), ()) {
    SetRandomSeed(P(0, i32));
    return NULL;
}

ONYX_DEF(WaitTime, (WASM_F64), ()) {
    WaitTime(P(0, f64));
    return NULL;
}

ONYX_DEF(PollInputEvents, (), ()) {
    PollInputEvents();
    return NULL;
}

ONYX_DEF(SwapScreenBuffer, (), ()) {
    SwapScreenBuffer();
    return NULL;
}

ONYX_DEF(GetFPS, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetFPS());
    return NULL;
}

ONYX_DEF(GetTime, (), (WASM_F64)) {
    results->data[0] = WASM_F64_VAL(GetTime());
    return NULL;
}

ONYX_DEF(GetFrameTime, (), (WASM_F32)) {
    results->data[0] = WASM_F32_VAL(GetFrameTime());
    return NULL;
}

ONYX_DEF(SetTargetFPS, (WASM_I32), ()) {
    SetTargetFPS(P(0, i32));
    return NULL;
}

ONYX_DEF(GetWorldToScreen2D, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(2, i32)) = GetWorldToScreen2D(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Camera2D *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(GetWorldToScreenEx, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(4, i32)) = GetWorldToScreenEx(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Camera *) ONYX_PTR(P(1, i32)), P(2, i32), P(3, i32));
    return NULL;
}

ONYX_DEF(GetScreenToWorld2D, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(2, i32)) = GetScreenToWorld2D(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Camera2D *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(GetWorldToScreen, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(2, i32)) = GetWorldToScreen(*(Vector3 *) ONYX_PTR(P(0, i32)), *(Camera *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(GetCameraMatrix2D, (WASM_I32, WASM_I32), ()) {
    *(Matrix *) ONYX_PTR(P(1, i32)) = GetCameraMatrix2D(*(Camera2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetCameraMatrix, (WASM_I32, WASM_I32), ()) {
    *(Matrix *) ONYX_PTR(P(1, i32)) = GetCameraMatrix(*(Camera *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMouseRay, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Ray *) ONYX_PTR(P(2, i32)) = GetMouseRay(*(Vector2 *) ONYX_PTR(P(0, i32)), *(Camera *) ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UnloadShader, (WASM_I32), ()) {
    UnloadShader(*(Shader *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(SetShaderValueTexture, (WASM_I32, WASM_I32, WASM_I32), ()) {
    SetShaderValueTexture(*(Shader *) ONYX_PTR(P(0, i32)), P(1, i32), *(Texture2D *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(SetShaderValueMatrix, (WASM_I32, WASM_I32, WASM_I32), ()) {
    SetShaderValueMatrix(*(Shader *) ONYX_PTR(P(0, i32)), P(1, i32), *(Matrix *) ONYX_PTR(P(2, i32)));
    return NULL;
}

ONYX_DEF(SetShaderValueV, (WASM_I32, WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    SetShaderValueV(*(Shader *) ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32)), P(3, i32), P(4, i32));
    return NULL;
}

ONYX_DEF(SetShaderValue, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    SetShaderValue(*(Shader *) ONYX_PTR(P(0, i32)), P(1, i32), ONYX_PTR(P(2, i32)), P(3, i32));
    return NULL;
}

ONYX_DEF(GetShaderLocationAttrib, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetShaderLocationAttrib(*(Shader *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(GetShaderLocation, (WASM_I32, WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetShaderLocation(*(Shader *) ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32))));
    return NULL;
}

ONYX_DEF(IsShaderReady, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsShaderReady(*(Shader *) ONYX_PTR(P(0, i32))));
    return NULL;
}

ONYX_DEF(LoadShaderFromMemory, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Shader *) ONYX_PTR(P(2, i32)) = LoadShaderFromMemory(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(LoadShader, (WASM_I32, WASM_I32, WASM_I32), ()) {
    *(Shader *) ONYX_PTR(P(2, i32)) = LoadShader(ONYX_PTR(P(0, i32)), ONYX_PTR(P(1, i32)));
    return NULL;
}

ONYX_DEF(UnloadVrStereoConfig, (WASM_I32), ()) {
    UnloadVrStereoConfig(*(VrStereoConfig *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(LoadVrStereoConfig, (WASM_I32, WASM_I32), ()) {
    *(VrStereoConfig *) ONYX_PTR(P(1, i32)) = LoadVrStereoConfig(*(VrDeviceInfo *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(EndVrStereoMode, (), ()) {
    EndVrStereoMode();
    return NULL;
}

ONYX_DEF(BeginVrStereoMode, (WASM_I32), ()) {
    BeginVrStereoMode(*(VrStereoConfig *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(EndScissorMode, (), ()) {
    EndScissorMode();
    return NULL;
}

ONYX_DEF(BeginScissorMode, (WASM_I32, WASM_I32, WASM_I32, WASM_I32), ()) {
    BeginScissorMode(P(0, i32), P(1, i32), P(2, i32), P(3, i32));
    return NULL;
}

ONYX_DEF(EndBlendMode, (), ()) {
    EndBlendMode();
    return NULL;
}

ONYX_DEF(BeginBlendMode, (WASM_I32), ()) {
    BeginBlendMode(P(0, i32));
    return NULL;
}

ONYX_DEF(EndShaderMode, (), ()) {
    EndShaderMode();
    return NULL;
}

ONYX_DEF(BeginShaderMode, (WASM_I32), ()) {
    BeginShaderMode(*(Shader *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(EndTextureMode, (), ()) {
    EndTextureMode();
    return NULL;
}

ONYX_DEF(BeginTextureMode, (WASM_I32), ()) {
    BeginTextureMode(*(RenderTexture2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(EndMode2D, (), ()) {
    EndMode2D();
    return NULL;
}

ONYX_DEF(BeginMode2D, (WASM_I32), ()) {
    BeginMode2D(*(Camera2D *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(EndDrawing, (), ()) {
    EndDrawing();
    return NULL;
}

ONYX_DEF(BeginDrawing, (), ()) {
    BeginDrawing();
    return NULL;
}

ONYX_DEF(ClearBackground, (WASM_I32), ()) {
    ClearBackground(*(Color *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsCursorOnScreen, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsCursorOnScreen());
    return NULL;
}

ONYX_DEF(DisableCursor, (), ()) {
    DisableCursor();
    return NULL;
}

ONYX_DEF(EnableCursor, (), ()) {
    EnableCursor();
    return NULL;
}

ONYX_DEF(IsCursorVisible, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsCursorVisible());
    return NULL;
}

ONYX_DEF(HideCursor, (), ()) {
    HideCursor();
    return NULL;
}

ONYX_DEF(ShowCursor, (), ()) {
    ShowCursor();
    return NULL;
}

ONYX_DEF(DisableEventWaiting, (), ()) {
    DisableEventWaiting();
    return NULL;
}

ONYX_DEF(EnableEventWaiting, (), ()) {
    EnableEventWaiting();
    return NULL;
}

ONYX_DEF(GetClipboardText, (), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetClipboardText());
    return NULL;
}

ONYX_DEF(SetClipboardText, (WASM_I64), ()) {
    SetClipboardText(P(0, i64));
    return NULL;
}

ONYX_DEF(GetMonitorName, (WASM_I32), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetMonitorName(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetWindowScaleDPI, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetWindowScaleDPI();
    return NULL;
}

ONYX_DEF(GetWindowPosition, (WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(0, i32)) = GetWindowPosition();
    return NULL;
}

ONYX_DEF(GetMonitorPhysicalHeight, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMonitorPhysicalHeight(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMonitorPhysicalWidth, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMonitorPhysicalWidth(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMonitorHeight, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMonitorHeight(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMonitorWidth, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMonitorWidth(P(0, i32)));
    return NULL;
}

ONYX_DEF(GetMonitorPosition, (WASM_I32, WASM_I32), ()) {
    *(Vector2 *) ONYX_PTR(P(1, i32)) = GetMonitorPosition(P(0, i32));
    return NULL;
}

ONYX_DEF(GetCurrentMonitor, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetCurrentMonitor());
    return NULL;
}

ONYX_DEF(GetMonitorCount, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetMonitorCount());
    return NULL;
}

ONYX_DEF(GetRenderHeight, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetRenderHeight());
    return NULL;
}

ONYX_DEF(GetRenderWidth, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetRenderWidth());
    return NULL;
}

ONYX_DEF(GetScreenHeight, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetScreenHeight());
    return NULL;
}

ONYX_DEF(GetScreenWidth, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(GetScreenWidth());
    return NULL;
}

ONYX_DEF(GetWindowHandle, (), (WASM_I64)) {
    results->data[0] = WASM_I64_VAL((int64_t) GetWindowHandle());
    return NULL;
}

ONYX_DEF(SetWindowFocused, (), ()) {
    SetWindowFocused();
    return NULL;
}

ONYX_DEF(SetWindowOpacity, (WASM_F32), ()) {
    SetWindowOpacity(P(0, f32));
    return NULL;
}

ONYX_DEF(SetWindowSize, (WASM_I32, WASM_I32), ()) {
    SetWindowSize(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(SetWindowMaxSize, (WASM_I32, WASM_I32), ()) {
    SetWindowMaxSize(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(SetWindowMinSize, (WASM_I32, WASM_I32), ()) {
    SetWindowMinSize(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(SetWindowMonitor, (WASM_I32), ()) {
    SetWindowMonitor(P(0, i32));
    return NULL;
}

ONYX_DEF(SetWindowPosition, (WASM_I32, WASM_I32), ()) {
    SetWindowPosition(P(0, i32), P(1, i32));
    return NULL;
}

ONYX_DEF(SetWindowTitle, (WASM_I64), ()) {
    SetWindowTitle(P(0, i64));
    return NULL;
}

ONYX_DEF(SetWindowIcons, (WASM_I32,WASM_I32), ()) {
    SetWindowIcons(ONYX_PTR(P(0, i32)), P(1, i32));
    return NULL;
}

ONYX_DEF(SetWindowIcon, (WASM_I32), ()) {
    SetWindowIcon(*(Image *) ONYX_PTR(P(0, i32)));
    return NULL;
}

ONYX_DEF(RestoreWindow, (), ()) {
    RestoreWindow();
    return NULL;
}

ONYX_DEF(MinimizeWindow, (), ()) {
    MinimizeWindow();
    return NULL;
}

ONYX_DEF(MaximizeWindow, (), ()) {
    MaximizeWindow();
    return NULL;
}

ONYX_DEF(ToggleBorderlessWindowed, (), ()) {
    ToggleBorderlessWindowed();
    return NULL;
}

ONYX_DEF(ToggleFullscreen, (), ()) {
    ToggleFullscreen();
    return NULL;
}

ONYX_DEF(ClearWindowState, (WASM_I32), ()) {
    ClearWindowState(P(0, i32));
    return NULL;
}

ONYX_DEF(SetWindowState, (WASM_I32), ()) {
    SetWindowState(P(0, i32));
    return NULL;
}

ONYX_DEF(IsWindowState, (WASM_I32), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowState(P(0, i32)));
    return NULL;
}

ONYX_DEF(IsWindowResized, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowResized());
    return NULL;
}

ONYX_DEF(IsWindowFocused, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowFocused());
    return NULL;
}

ONYX_DEF(IsWindowMaximized, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowMaximized());
    return NULL;
}

ONYX_DEF(IsWindowMinimized, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowMinimized());
    return NULL;
}

ONYX_DEF(IsWindowHidden, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowHidden());
    return NULL;
}

ONYX_DEF(IsWindowFullscreen, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowFullscreen());
    return NULL;
}

ONYX_DEF(IsWindowReady, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(IsWindowReady());
    return NULL;
}

ONYX_DEF(WindowShouldClose, (), (WASM_I32)) {
    results->data[0] = WASM_I32_VAL(WindowShouldClose());
    return NULL;
}

ONYX_DEF(CloseWindow, (), ()) {
    CloseWindow();
    return NULL;
}



ONYX_LIBRARY {
    ONYX_FUNC(InitWindow)
    ONYX_FUNC(SetAudioStreamBufferSizeDefault)
    ONYX_FUNC(SetAudioStreamPan)
    ONYX_FUNC(SetAudioStreamPitch)
    ONYX_FUNC(SetAudioStreamVolume)
    ONYX_FUNC(StopAudioStream)
    ONYX_FUNC(IsAudioStreamPlaying)
    ONYX_FUNC(ResumeAudioStream)
    ONYX_FUNC(PauseAudioStream)
    ONYX_FUNC(PlayAudioStream)
    ONYX_FUNC(IsAudioStreamProcessed)
    ONYX_FUNC(UpdateAudioStream)
    ONYX_FUNC(UnlodaAudioStream)
    ONYX_FUNC(IsAudioStreamReady)
    ONYX_FUNC(LoadAudioStream)
    ONYX_FUNC(GetMusicTimePlayed)
    ONYX_FUNC(GetMusicTimeLength)
    ONYX_FUNC(SetMusicPan)
    ONYX_FUNC(SetMusicPitch)
    ONYX_FUNC(SetMusicVolume)
    ONYX_FUNC(SeekMusicStream)
    ONYX_FUNC(ResumeMusicStream)
    ONYX_FUNC(PauseMusicStream)
    ONYX_FUNC(StopMusicStream)
    ONYX_FUNC(UpdateMusicStream)
    ONYX_FUNC(IsMusicStreamPlaying)
    ONYX_FUNC(PlayMusicStream)
    ONYX_FUNC(UnloadMusicStream)
    ONYX_FUNC(IsMusicReady)
    ONYX_FUNC(LoadMusicStreamFromMemory)
    ONYX_FUNC(LoadMusicStream)
    ONYX_FUNC(UnloadWaveSamples)
    ONYX_FUNC(LoadWaveSamples)
    ONYX_FUNC(WaveFormat)
    ONYX_FUNC(WaveCrop)
    ONYX_FUNC(WaveCopy)
    ONYX_FUNC(SetSoundPan)
    ONYX_FUNC(SetSoundPitch)
    ONYX_FUNC(SetSoundVolume)
    ONYX_FUNC(IsSoundPlaying)
    ONYX_FUNC(ResumeSound)
    ONYX_FUNC(PauseSound)
    ONYX_FUNC(StopSound)
    ONYX_FUNC(PlaySound)
    ONYX_FUNC(ExportWaveAsCode)
    ONYX_FUNC(ExportWave)
    ONYX_FUNC(UnloadSoundAlias)
    ONYX_FUNC(UnloadSound)
    ONYX_FUNC(UnloadWave)
    ONYX_FUNC(UpdateSound)
    ONYX_FUNC(IsSoundReady)
    ONYX_FUNC(LoadSoundAlias)
    ONYX_FUNC(LoadSoundFromWave)
    ONYX_FUNC(LoadSound)
    ONYX_FUNC(IsWaveReady)
    ONYX_FUNC(LoadWaveFromMemory)
    ONYX_FUNC(LoadWave)
    ONYX_FUNC(GetMasterVolume)
    ONYX_FUNC(SetMasterVolume)
    ONYX_FUNC(IsAudioDeviceReady)
    ONYX_FUNC(CloseAudioDevice)
    ONYX_FUNC(InitAudioDevice)
    ONYX_FUNC(UnloadModel)
    ONYX_FUNC(IsModelReady)
    ONYX_FUNC(LoadModelFromMesh)
    ONYX_FUNC(LoadModel)
    ONYX_FUNC(DrawGrid)
    ONYX_FUNC(DrawRay)
    ONYX_FUNC(DrawPlane)
    ONYX_FUNC(DrawCapsuleWires)
    ONYX_FUNC(DrawCapsule)
    ONYX_FUNC(DrawCylinderWiresEx)
    ONYX_FUNC(DrawCylinderWires)
    ONYX_FUNC(DrawCylinderEx)
    ONYX_FUNC(DrawCylinder)
    ONYX_FUNC(DrawSphereWires)
    ONYX_FUNC(DrawSphereEx)
    ONYX_FUNC(DrawSphere)
    ONYX_FUNC(DrawCubeWiresV)
    ONYX_FUNC(DrawCubeWires)
    ONYX_FUNC(DrawCubeV)
    ONYX_FUNC(DrawCube)
    ONYX_FUNC(DrawTriangleStrip3D)
    ONYX_FUNC(DrawTriangle3D)
    ONYX_FUNC(DrawCircle3D)
    ONYX_FUNC(DrawPoint3D)
    ONYX_FUNC(DrawLine3D)
    ONYX_FUNC(GetGlyphAtlasRec)
    ONYX_FUNC(GetGlyphInfo)
    ONYX_FUNC(GetGlyphIndex)
    ONYX_FUNC(MeasureTextEx)
    ONYX_FUNC(MeasureText)
    ONYX_FUNC(SetTextLineSpacing)
    ONYX_FUNC(DrawTextCodepoints)
    ONYX_FUNC(DrawTextCodepoint)
    ONYX_FUNC(DrawTextPro)
    ONYX_FUNC(DrawTextEx)
    ONYX_FUNC(DrawText)
    ONYX_FUNC(DrawFPS)
    ONYX_FUNC(ExportFontAsCode)
    ONYX_FUNC(UnloadFont)
    ONYX_FUNC(UnloadFontData)
    ONYX_FUNC(GenImageFontAtlas)
    ONYX_FUNC(LoadFontData)
    ONYX_FUNC(IsFontReady)
    ONYX_FUNC(LoadFontFromMemory)
    ONYX_FUNC(LoadFontFromImage)
    ONYX_FUNC(LoadFontEx)
    ONYX_FUNC(LoadFont)
    ONYX_FUNC(GetFontDefault)
    ONYX_FUNC(GetPixelDataSize)
    ONYX_FUNC(SetPixelColor)
    ONYX_FUNC(GetPixelColor)
    ONYX_FUNC(GetColor)
    ONYX_FUNC(ColorAlphaBlend)
    ONYX_FUNC(ColorAlpha)
    ONYX_FUNC(ColorContrast)
    ONYX_FUNC(ColorBrightness)
    ONYX_FUNC(ColorTint)
    ONYX_FUNC(ColorFromHSV)
    ONYX_FUNC(ColorToHSV)
    ONYX_FUNC(ColorFromNormalized)
    ONYX_FUNC(ColorNormalize)
    ONYX_FUNC(ColorToInt)
    ONYX_FUNC(Fade)
    ONYX_FUNC(DrawTextureNPatch)
    ONYX_FUNC(DrawTexturePro)
    ONYX_FUNC(DrawTextureRec)
    ONYX_FUNC(DrawTextureEx)
    ONYX_FUNC(DrawTextureV)
    ONYX_FUNC(DrawTexture)
    ONYX_FUNC(SetTextureWrap)
    ONYX_FUNC(SetTextureFilter)
    ONYX_FUNC(GenTextureMipmaps)
    ONYX_FUNC(UpdateTextureRec)
    ONYX_FUNC(UpdateTexture)
    ONYX_FUNC(UnloadRenderTexture)
    ONYX_FUNC(IsRenderTextureReady)
    ONYX_FUNC(UnloadTexture)
    ONYX_FUNC(IsTextureReady)
    ONYX_FUNC(LoadRenderTexture)
    ONYX_FUNC(LoadTextureCubemap)
    ONYX_FUNC(LoadTextureFromImage)
    ONYX_FUNC(LoadTexture)
    ONYX_FUNC(ImageDrawTextEx)
    ONYX_FUNC(ImageDrawText)
    ONYX_FUNC(ImageDraw)
    ONYX_FUNC(ImageDrawRectangleLines)
    ONYX_FUNC(ImageDrawRectangleRec)
    ONYX_FUNC(ImageDrawRectangleV)
    ONYX_FUNC(ImageDrawRectangle)
    ONYX_FUNC(ImageDrawCircleLineV)
    ONYX_FUNC(ImageDrawCircleLine)
    ONYX_FUNC(ImageDrawCircleV)
    ONYX_FUNC(ImageDrawCircle)
    ONYX_FUNC(ImageDrawLineV)
    ONYX_FUNC(ImageDrawLine)
    ONYX_FUNC(ImageDrawPixelV)
    ONYX_FUNC(ImageDrawPixel)
    ONYX_FUNC(ImageClearBackground)
    ONYX_FUNC(GetImageColor)
    ONYX_FUNC(GetImageAlphaBorder)
    ONYX_FUNC(UnloadImagePalette)
    ONYX_FUNC(UnloadImageColors)
    ONYX_FUNC(LoadImagePalette)
    ONYX_FUNC(LoadImageColors)
    ONYX_FUNC(ImageColorReplace)
    ONYX_FUNC(ImageColorBrightness)
    ONYX_FUNC(ImageColorContract)
    ONYX_FUNC(ImageColorGrayscale)
    ONYX_FUNC(ImageColorInvert)
    ONYX_FUNC(ImageColorTint)
    ONYX_FUNC(ImageRotateCCW)
    ONYX_FUNC(ImageRotateCW)
    ONYX_FUNC(ImageRotate)
    ONYX_FUNC(ImageFlipHorizontal)
    ONYX_FUNC(ImageFlipVertical)
    ONYX_FUNC(ImageDither)
    ONYX_FUNC(ImageMipmaps)
    ONYX_FUNC(ImageResizeCanvas)
    ONYX_FUNC(ImageResizeNN)
    ONYX_FUNC(ImageResize)
    ONYX_FUNC(ImageKernelConvolution)
    ONYX_FUNC(ImageBlurGuassian)
    ONYX_FUNC(ImageAlphaPremultiply)
    ONYX_FUNC(ImageAlphaMask)
    ONYX_FUNC(ImageAlphaClear)
    ONYX_FUNC(ImageAlphaCrop)
    ONYX_FUNC(ImageCrop)
    ONYX_FUNC(ImageToPOT)
    ONYX_FUNC(ImageFormat)
    ONYX_FUNC(ImageTextEx)
    ONYX_FUNC(ImageText)
    ONYX_FUNC(ImageFromImage)
    ONYX_FUNC(ImageCopy)
    ONYX_FUNC(GenImageText)
    ONYX_FUNC(GenImageCellular)
    ONYX_FUNC(GenImagePerlinNoise)
    ONYX_FUNC(GenImageWhiteNoise)
    ONYX_FUNC(GenImageChecked)
    ONYX_FUNC(GenImageGradientSquare)
    ONYX_FUNC(GenImageGradientRadial)
    ONYX_FUNC(GenImageGradientLinear)
    ONYX_FUNC(GenImageColor)
    ONYX_FUNC(ExportImageAsCode)
    ONYX_FUNC(ExportImageToMemory)
    ONYX_FUNC(ExportImage)
    ONYX_FUNC(UnloadImage)
    ONYX_FUNC(IsImageReady)
    ONYX_FUNC(LoadImageFromScreen)
    ONYX_FUNC(LoadImageFromTexture)
    ONYX_FUNC(LoadImageFromMemory)
    ONYX_FUNC(LoadImageAnim)
    ONYX_FUNC(LoadImageSvg)
    ONYX_FUNC(LoadImageRaw)
    ONYX_FUNC(LoadImage)
    ONYX_FUNC(GetCollisionRec)
    ONYX_FUNC(CheckCollisionPointLine)
    ONYX_FUNC(CheckCollisionLines)
    ONYX_FUNC(CheckCollisionPointPoly)
    ONYX_FUNC(CheckCollisionPointTriangle)
    ONYX_FUNC(CheckCollisionPointCircle)
    ONYX_FUNC(CheckCollisionPointRec)
    ONYX_FUNC(CheckCollisionCircleRec)
    ONYX_FUNC(CheckCollisionCircles)
    ONYX_FUNC(CheckCollisionRecs)
    ONYX_FUNC(GetSplinePointBezierCubic)
    ONYX_FUNC(GetSplinePointBezierQuad)
    ONYX_FUNC(GetSplinePointCatmullRom)
    ONYX_FUNC(GetSplinePointBasis)
    ONYX_FUNC(GetSplinePointLinear)
    ONYX_FUNC(DrawPolyLinesEx)
    ONYX_FUNC(DrawPolyLines)
    ONYX_FUNC(DrawPoly)
    ONYX_FUNC(DrawTriangleStrip)
    ONYX_FUNC(DrawTriangleFan)
    ONYX_FUNC(DrawTriangleLines)
    ONYX_FUNC(DrawTriangle)
    ONYX_FUNC(DrawRectangleRoundedLines)
    ONYX_FUNC(DrawRectangleRounded)
    ONYX_FUNC(DrawRectangleLinesEx)
    ONYX_FUNC(DrawRectangleLines)
    ONYX_FUNC(DrawRectangleGradientH)
    ONYX_FUNC(DrawRectangleGradientV)
    ONYX_FUNC(DrawRectanglePro)
    ONYX_FUNC(DrawRectangleRec)
    ONYX_FUNC(DrawRectangleV)
    ONYX_FUNC(DrawRectangle)
    ONYX_FUNC(DrawRingLines)
    ONYX_FUNC(DrawRing)
    ONYX_FUNC(DrawEllipseLines)
    ONYX_FUNC(DrawEllipse)
    ONYX_FUNC(DrawCirlceLinesV)
    ONYX_FUNC(DrawCircleLines)
    ONYX_FUNC(DrawCircleV)
    ONYX_FUNC(DrawCircleSectorLines)
    ONYX_FUNC(DrawCircleSector)
    ONYX_FUNC(DrawCircle)
    ONYX_FUNC(DrawLineBezier)
    ONYX_FUNC(DrawLineStrip)
    ONYX_FUNC(DrawLineEx)
    ONYX_FUNC(DrawLineV)
    ONYX_FUNC(DrawLine)
    ONYX_FUNC(DrawPixelV)
    ONYX_FUNC(DrawPixel)
    ONYX_FUNC(SetShapesTexture)
    ONYX_FUNC(UpdateCameraPro)
    ONYX_FUNC(UpdateCamera)
    ONYX_FUNC(GetGesturePinchAngle)
    ONYX_FUNC(GetGesturePinchVector)
    ONYX_FUNC(GetGestureDragAngle)
    ONYX_FUNC(GetGestureDragVector)
    ONYX_FUNC(GetGestureHoldDuration)
    ONYX_FUNC(GetGestureDetected)
    ONYX_FUNC(IsGestureDetected)
    ONYX_FUNC(SetGesturesEnabled)
    ONYX_FUNC(GetTouchPointCount)
    ONYX_FUNC(GetTouchPointId)
    ONYX_FUNC(GetTouchPosition)
    ONYX_FUNC(GetTouchY)
    ONYX_FUNC(GetTouchX)
    ONYX_FUNC(SetMouseCursor)
    ONYX_FUNC(GetMouseWheelMoveV)
    ONYX_FUNC(GetMouseWheelMove)
    ONYX_FUNC(SetMouseScale)
    ONYX_FUNC(SetMouseOffset)
    ONYX_FUNC(SetMousePosition)
    ONYX_FUNC(GetMouseDelta_)
    ONYX_FUNC(GetMousePosition_)
    ONYX_FUNC(GetMouseY)
    ONYX_FUNC(GetMouseX)
    ONYX_FUNC(IsMouseButtonUp)
    ONYX_FUNC(IsMouseButtonReleased)
    ONYX_FUNC(IsMouseButtonDown)
    ONYX_FUNC(IsMouseButtonPressed)
    ONYX_FUNC(SetGamepadMappings)
    ONYX_FUNC(GetGamepadAxisMovement)
    ONYX_FUNC(GetGamepadAxisCount)
    ONYX_FUNC(GetGamepadButtonPressed)
    ONYX_FUNC(IsGamepadButtonUp)
    ONYX_FUNC(IsGamepadButtonRelased)
    ONYX_FUNC(IsGamepadButtonDown)
    ONYX_FUNC(IsGamepadButtonPressed)
    ONYX_FUNC(GetGamepadName)
    ONYX_FUNC(IsGamepadAvailable)
    ONYX_FUNC(SetExitKey)
    ONYX_FUNC(GetCharPressed)
    ONYX_FUNC(GetKeyPressed)
    ONYX_FUNC(IsKeyUp)
    ONYX_FUNC(IsKeyReleased)
    ONYX_FUNC(IsKeyDown)
    ONYX_FUNC(IsKeyPressedRepeat)
    ONYX_FUNC(IsKeyPressed)
    ONYX_FUNC(PlayAutomationEvent)
    ONYX_FUNC(StopAutomationEventRecording)
    ONYX_FUNC(StartAutomationEventRecording)
    ONYX_FUNC(SetAutomationEventBaseFrame)
    ONYX_FUNC(SetAutomationEventList)
    ONYX_FUNC(ExportAutomationEventList)
    ONYX_FUNC(UnloadAutomationEventList)
    ONYX_FUNC(LoadAutomationEventList)
    ONYX_FUNC(DecodeDataBase64)
    ONYX_FUNC(EncodeDataBase64)
    ONYX_FUNC(DecompressData)
    ONYX_FUNC(CompressData)
    ONYX_FUNC(GetFileModTime)
    ONYX_FUNC(UnloadDroppedFiles)
    ONYX_FUNC(LoadDroppedFiles)
    ONYX_FUNC(IsFileDropped)
    ONYX_FUNC(UnloadDirectoryFiles)
    ONYX_FUNC(LoadDirectoryFilesEx)
    ONYX_FUNC(LoadDirectoryFiles)
    ONYX_FUNC(IsPathFile)
    ONYX_FUNC(ChangeDirectory)
    ONYX_FUNC(GetApplicationDirectory)
    ONYX_FUNC(GetWoringDirectory)
    ONYX_FUNC(GetPrevDirectoryPath)
    ONYX_FUNC(GetDirectoryPath)
    ONYX_FUNC(GetFileNameWithoutExt)
    ONYX_FUNC(GetFileName)
    ONYX_FUNC(GetFileExtension)
    ONYX_FUNC(GetFileLength)
    ONYX_FUNC(IsFileExtension)
    ONYX_FUNC(DirectoryExists)
    ONYX_FUNC(FileExists)
    ONYX_FUNC(SaveFileText)
    ONYX_FUNC(UnloadFileText)
    ONYX_FUNC(LoadFileText)
    ONYX_FUNC(ExportDataAsCode)
    ONYX_FUNC(SaveFileData)
    ONYX_FUNC(UnloadFileData)
    ONYX_FUNC(LoadFileData)
    ONYX_FUNC(MemFree)
    ONYX_FUNC(MemRealloc)
    ONYX_FUNC(MemAlloc)
    ONYX_FUNC(SetTraceLogLevel)
    ONYX_FUNC(UnloadRandomSequence)
    ONYX_FUNC(LoadRandomSequence)
    ONYX_FUNC(GetRandomValue)
    ONYX_FUNC(SetRandomSeed)
    ONYX_FUNC(WaitTime)
    ONYX_FUNC(PollInputEvents)
    ONYX_FUNC(SwapScreenBuffer)
    ONYX_FUNC(GetFPS)
    ONYX_FUNC(GetTime)
    ONYX_FUNC(GetFrameTime)
    ONYX_FUNC(SetTargetFPS)
    ONYX_FUNC(GetWorldToScreen2D)
    ONYX_FUNC(GetWorldToScreenEx)
    ONYX_FUNC(GetScreenToWorld2D)
    ONYX_FUNC(GetWorldToScreen)
    ONYX_FUNC(GetCameraMatrix2D)
    ONYX_FUNC(GetCameraMatrix)
    ONYX_FUNC(GetMouseRay)
    ONYX_FUNC(UnloadShader)
    ONYX_FUNC(SetShaderValueTexture)
    ONYX_FUNC(SetShaderValueMatrix)
    ONYX_FUNC(SetShaderValueV)
    ONYX_FUNC(SetShaderValue)
    ONYX_FUNC(GetShaderLocationAttrib)
    ONYX_FUNC(GetShaderLocation)
    ONYX_FUNC(IsShaderReady)
    ONYX_FUNC(LoadShaderFromMemory)
    ONYX_FUNC(LoadShader)
    ONYX_FUNC(UnloadVrStereoConfig)
    ONYX_FUNC(LoadVrStereoConfig)
    ONYX_FUNC(EndVrStereoMode)
    ONYX_FUNC(BeginVrStereoMode)
    ONYX_FUNC(EndScissorMode)
    ONYX_FUNC(BeginScissorMode)
    ONYX_FUNC(EndBlendMode)
    ONYX_FUNC(BeginBlendMode)
    ONYX_FUNC(EndShaderMode)
    ONYX_FUNC(BeginShaderMode)
    ONYX_FUNC(EndTextureMode)
    ONYX_FUNC(BeginTextureMode)
    ONYX_FUNC(EndMode2D)
    ONYX_FUNC(BeginMode2D)
    ONYX_FUNC(EndDrawing)
    ONYX_FUNC(BeginDrawing)
    ONYX_FUNC(ClearBackground)
    ONYX_FUNC(IsCursorOnScreen)
    ONYX_FUNC(DisableCursor)
    ONYX_FUNC(EnableCursor)
    ONYX_FUNC(IsCursorVisible)
    ONYX_FUNC(HideCursor)
    ONYX_FUNC(ShowCursor)
    ONYX_FUNC(DisableEventWaiting)
    ONYX_FUNC(EnableEventWaiting)
    ONYX_FUNC(GetClipboardText)
    ONYX_FUNC(SetClipboardText)
    ONYX_FUNC(GetMonitorName)
    ONYX_FUNC(GetWindowScaleDPI)
    ONYX_FUNC(GetWindowPosition)
    ONYX_FUNC(GetMonitorPhysicalHeight)
    ONYX_FUNC(GetMonitorPhysicalWidth)
    ONYX_FUNC(GetMonitorHeight)
    ONYX_FUNC(GetMonitorWidth)
    ONYX_FUNC(GetMonitorPosition)
    ONYX_FUNC(GetCurrentMonitor)
    ONYX_FUNC(GetMonitorCount)
    ONYX_FUNC(GetRenderHeight)
    ONYX_FUNC(GetRenderWidth)
    ONYX_FUNC(GetScreenHeight)
    ONYX_FUNC(GetScreenWidth)
    ONYX_FUNC(GetWindowHandle)
    ONYX_FUNC(SetWindowFocused)
    ONYX_FUNC(SetWindowOpacity)
    ONYX_FUNC(SetWindowSize)
    ONYX_FUNC(SetWindowMaxSize)
    ONYX_FUNC(SetWindowMinSize)
    ONYX_FUNC(SetWindowMonitor)
    ONYX_FUNC(SetWindowPosition)
    ONYX_FUNC(SetWindowTitle)
    ONYX_FUNC(SetWindowIcons)
    ONYX_FUNC(SetWindowIcon)
    ONYX_FUNC(RestoreWindow)
    ONYX_FUNC(MinimizeWindow)
    ONYX_FUNC(MaximizeWindow)
    ONYX_FUNC(ToggleBorderlessWindowed)
    ONYX_FUNC(ToggleFullscreen)
    ONYX_FUNC(ClearWindowState)
    ONYX_FUNC(SetWindowState)
    ONYX_FUNC(IsWindowState)
    ONYX_FUNC(IsWindowResized)
    ONYX_FUNC(IsWindowFocused)
    ONYX_FUNC(IsWindowMaximized)
    ONYX_FUNC(IsWindowMinimized)
    ONYX_FUNC(IsWindowHidden)
    ONYX_FUNC(IsWindowFullscreen)
    ONYX_FUNC(IsWindowReady)
    ONYX_FUNC(WindowShouldClose)
    ONYX_FUNC(CloseWindow)
    NULL
};