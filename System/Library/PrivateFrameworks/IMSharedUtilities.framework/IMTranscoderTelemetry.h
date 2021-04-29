/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMTranscoderTelemetry : NSObject {

	unsigned char _signpostId;

}
-(id)init;
-(long long)_telemetryImageTypeForUTI:(id)arg1 ;
-(void)_emitSignpostTranscodeRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)emitTranscodeBeginFromUTI:(id)arg1 ;
-(void)emitTranscodeEndFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationBeginFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationEndFromUTI:(id)arg1 ;
-(void)emitSignpostNoTranscodeFromUTI:(id)arg1 ;
-(void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeSkipSourceUTI:(id)arg1 ;
@end

