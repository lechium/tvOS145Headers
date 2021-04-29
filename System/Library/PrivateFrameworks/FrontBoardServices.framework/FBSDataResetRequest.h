/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FBSDataResetRequest : NSObject {

	long long _mode;
	long long _options;
	NSString* _reason;

}

@property (assign,nonatomic) long long mode;                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
-(NSString *)reason;
-(void)setMode:(long long)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(long long)mode;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3 ;
@end
