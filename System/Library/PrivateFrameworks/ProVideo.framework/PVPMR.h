/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString;

@interface PVPMR : NSObject {

	BOOL gPVPMR_ENABLED;
	NSMutableString* _buffer;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setLevel:(int)arg1 ;
-(int)getLevel;
-(id)reportPMR:(double)arg1 pmrKey:(id)arg2 pmrComment:(id)arg3 ;
-(void)writePMRInfoToBuffer:(id)arg1 ;
-(void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2 ;
-(void)writeBufferToPermanentStorage;
@end

