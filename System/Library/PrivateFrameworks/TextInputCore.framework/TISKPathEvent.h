/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, NSString, TIKeyboardTouchEvent, NSArray;

@interface TISKPathEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	NSString* _candidateString;
	TIKeyboardTouchEvent* _pathTouchUp;
	NSArray* _allTouches;

}
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 candidate:(id)arg2 allTouches:(id)arg3 emojiSearchMode:(BOOL)arg4 order:(long long)arg5 ;
-(double)countPathPauses:(id)arg1 ;
@end

