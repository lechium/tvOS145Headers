/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSAggdService : NSObject {

	NSString* _loggingPrefix;

}

@property (nonatomic,retain) NSString * loggingPrefix;              //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
+(id)defaultService;
-(NSString *)loggingPrefix;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(void)tallyTask:(id)arg1 ;
-(void)tallySynthesisCore:(id)arg1 ;
-(id)initWithLoggingPrefix:(id)arg1 ;
-(void)recordCategory:(id)arg1 value:(id)arg2 ;
@end

