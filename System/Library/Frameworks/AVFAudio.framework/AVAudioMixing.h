/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;

@end

