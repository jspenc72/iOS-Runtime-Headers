/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class <GKVoiceChatClient>;

@interface GKVoiceChatService : NSObject {
    id _voiceChatService;
}

@property <GKVoiceChatClient> * client;
@property(readonly) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) bool inputMeteringEnabled;
@property(getter=isMicrophoneMuted) bool microphoneMuted;
@property(readonly) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) bool outputMeteringEnabled;
@property float remoteParticipantVolume;

+ (id)defaultVoiceChatService;
+ (void)initialize;
+ (bool)isVoIPAllowed;

- (bool)acceptCallID:(long long)arg1 error:(id*)arg2;
- (id)client;
- (void)dealloc;
- (void)denyCallID:(long long)arg1;
- (float)inputMeterLevel;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputMeteringEnabled;
- (float)outputMeterLevel;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (float)remoteParticipantVolume;
- (void)setClient:(id)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;

@end