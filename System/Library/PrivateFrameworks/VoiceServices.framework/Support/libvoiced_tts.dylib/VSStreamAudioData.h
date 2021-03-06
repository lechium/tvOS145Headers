/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class VSMappedData, NSMutableArray;

@interface VSStreamAudioData : NSObject {

	VSMappedData* _mappedData;
	NSMutableArray* _mappedAudioInfo;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) VSMappedData * mappedData;                       //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mappedAudioInfo;                //@synthesize mappedAudioInfo=_mappedAudioInfo - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
-(double)duration;
-(AudioStreamBasicDescription)asbd;
-(VSMappedData *)mappedData;
-(BOOL)writeWaveToFilePath:(id)arg1 ;
-(void)appendAudioData:(id)arg1 packetCount:(unsigned long long)arg2 packetDescriptions:(id)arg3 ;
-(void)setMappedData:(VSMappedData *)arg1 ;
-(void)enumerateAudioWithBlock:(/*^block*/id)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 ;
-(NSMutableArray *)mappedAudioInfo;
-(void)setMappedAudioInfo:(NSMutableArray *)arg1 ;
@end

