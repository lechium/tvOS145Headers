/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TIUITextChecking;
#import <TextInputCore/TextInputCore-Structs.h>
@interface TITextChecker : NSObject {

	id<_TIUITextChecking> _checker;

}

@property (nonatomic,readonly) id<_TIUITextChecking> checker;              //@synthesize checker=_checker - In the implementation block
+(id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg1 ;
-(id)init;
-(id)initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)doneLoading;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(id<_TIUITextChecking>)checker;
@end

