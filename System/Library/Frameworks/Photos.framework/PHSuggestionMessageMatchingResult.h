/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHSuggestion, PHSuggestionMessageContext, NSMutableDictionary;

@interface PHSuggestionMessageMatchingResult : NSObject {

	PHSuggestion* _suggestion;
	PHSuggestionMessageContext* _messageContext;
	NSMutableDictionary* _scoreByCMMSuggestionMatchingType;

}

@property (nonatomic,retain) PHSuggestion * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) PHSuggestionMessageContext * messageContext;                         //@synthesize messageContext=_messageContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scoreByCMMSuggestionMatchingType;              //@synthesize scoreByCMMSuggestionMatchingType=_scoreByCMMSuggestionMatchingType - In the implementation block
-(void)setSuggestion:(PHSuggestion *)arg1 ;
-(PHSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 messageContext:(id)arg2 ;
-(void)registerMatchingType:(long long)arg1 weight:(double)arg2 ;
-(double)scoreForSuggestionMatchingType:(long long)arg1 ;
-(PHSuggestionMessageContext *)messageContext;
-(void)setMessageContext:(PHSuggestionMessageContext *)arg1 ;
-(NSMutableDictionary *)scoreByCMMSuggestionMatchingType;
-(void)setScoreByCMMSuggestionMatchingType:(NSMutableDictionary *)arg1 ;
@end

