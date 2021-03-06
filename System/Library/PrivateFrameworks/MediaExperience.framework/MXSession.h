/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaExperience/MediaExperience-Structs.h>
@class NSString;

@interface MXSession : NSObject {

	opaqueCMSessionRef mCoreSession;
	unsigned long long mCoreSessionID;
	unsigned long long mCoreSessionType;
	BOOL mIsMuted;
	NSString* mDescription;
	int mClientType;
	BOOL mIsPlaying;
	unsigned long long mID;
	unsigned mPreferredNumberOfOutputChannels;
	double mPreferredOutputSampleRate;
	NSString* mPreferredAudioHardwareFormat;
	NSString* mMutePriority;
	BOOL mIAmPiP;
	BOOL mDoesntActuallyPlayAudio;
	BOOL mPrefersMultichannelAudio;

}
+(BOOL)_audioQueueOptionsForMute:(unsigned long long)arg1 ;
+(BOOL)audioQueueOptionsForMute:(unsigned long long)arg1 ;
+(int)updateDoesntActuallyPlayAudio:(opaqueCMSession*)arg1 ;
+(int)updateIsPlaying:(opaqueCMSession*)arg1 ;
+(int)updatePreferredNumberOfOutputChannels:(opaqueCMSession*)arg1 ;
+(int)updatePreferredAudioHardwareFormat:(opaqueCMSession*)arg1 withMaxOutputChannels:(unsigned)arg2 andCalledFromDealloc:(BOOL)arg3 ;
+(int)updatePreferredOutputSampleRate:(opaqueCMSession*)arg1 ;
+(int)updatePrefersMultichannelAudio:(opaqueCMSession*)arg1 ;
+(BOOL)isCoreSessionFormatValidForMaxOutputChannels:(id)arg1 ;
+(unsigned)getResolvedPreferredNumberOfOutputChannels:(opaqueCMSession*)arg1 ;
+(id)copyMXSessionForID:(unsigned long long)arg1 ;
-(id)description;
-(void)dealloc;
-(id)info;
-(int)setClientType:(int)arg1 ;
-(void)_dealloc;
-(int)setID:(unsigned long long)arg1 ;
-(int)setIsMuted:(BOOL)arg1 ;
-(id)initWithSession:(opaqueCMSessionRef)arg1 ;
-(void)mute;
-(int)setIsPlaying:(BOOL)arg1 ;
-(unsigned long long)getID;
-(BOOL)getIsPlaying;
-(BOOL)getIsMuted;
-(id)getMutePriority;
-(BOOL)getActuallyPlaysAudio;
-(void)unmute;
-(id)_initWithSession:(opaqueCMSession*)arg1 ;
-(int)copyPropertyForKey:(id)arg1 valueOut:(id*)arg2 ;
-(int)_copyPropertyForKey:(id)arg1 valueOut:(id*)arg2 ;
-(int)setPropertyForKey:(id)arg1 value:(const void*)arg2 ;
-(int)_setPropertyForKey:(id)arg1 value:(const void*)arg2 ;
-(void)dumpInfo;
-(BOOL)getIAmPiP;
-(unsigned)getPreferredNumberOfOutputChannels;
-(id)getClientTypeAsString;
-(id)getPreferredAudioHardwareFormat;
-(double)getPreferredOutputSampleRate;
-(BOOL)getDoesntActuallyPlayAudio;
-(BOOL)getPrefersMultichannelAudio;
-(void)postIsMutedDidChange;
-(opaqueCMSession*)getCoreSession;
-(long long)getCoreSessionID;
-(int)getClientType;
-(int)setMutePriority:(id)arg1 ;
-(int)setIAmPiP:(BOOL)arg1 ;
-(int)setPreferredNumberOfOutputChannels:(unsigned)arg1 ;
-(int)setPreferredAudioHardwareFormat:(id)arg1 ;
-(int)setPreferredOutputSampleRate:(double)arg1 ;
-(int)setDoesntActuallyPlayAudio:(BOOL)arg1 ;
-(int)setPrefersMultichannelAudio:(BOOL)arg1 ;
@end

