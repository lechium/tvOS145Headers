/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceServices/VoiceServices-Structs.h>
@interface VSOpusDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _asbd;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)beginChunkDecoderForStreamDescription:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunk:(id)arg1 outError:(id*)arg2 ;
-(void)endChunkDecoding;
-(OpaqueAudioConverterRef)_opusDecoder:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunks:(id)arg1 streamDescription:(AudioStreamBasicDescription)arg2 outError:(id*)arg3 ;
@end

