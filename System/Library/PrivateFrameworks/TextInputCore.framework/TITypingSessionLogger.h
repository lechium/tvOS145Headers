/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocol.h>

@protocol TIKeyboardInteractionProtocol;
@class NSMutableArray, NSString;

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol> {

	id<TIKeyboardInteractionProtocol> _typingSession;
	NSMutableArray* _typingEvents;

}

@property (readonly) unsigned long long eventCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)eventCount;
-(id)typingSession;
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2 ;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
-(void)addTouchEvent:(id)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9 ;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8 ;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2 ;
-(id)initWithTypingSession:(id)arg1 ;
-(BOOL)shouldPrintEvent:(id)arg1 ;
-(void)sendTo:(id)arg1 ;
-(id)logDetailsForKeyboardState:(id)arg1 ;
@end

