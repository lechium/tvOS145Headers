/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, JSValue;


@protocol IKAppKeyboardBridge <NSObject>
@property (setter=setJSText:,nonatomic,copy) NSString * jsText; 
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource; 
@property (setter=setJSHints:,nonatomic,copy) JSValue * jsHints; 
@required
-(void)setJSText:(id)arg1;
-(NSString *)jsText;
-(void)setJSHints:(id)arg1;
-(JSValue *)jsHints;
-(NSString *)jsSource;
-(void)setJSSource:(id)arg1;

@end

