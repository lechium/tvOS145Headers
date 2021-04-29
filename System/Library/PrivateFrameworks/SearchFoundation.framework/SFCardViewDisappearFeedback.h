/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class SFCard;

@interface SFCardViewDisappearFeedback : SFFeedback {

	SFCard* _card;
	unsigned long long _cardDisappearEvent;

}

@property (nonatomic,readonly) SFCard * card;                                    //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned long long cardDisappearEvent;              //@synthesize cardDisappearEvent=_cardDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFCard *)card;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(id)initWithCard:(id)arg1 event:(unsigned long long)arg2 ;
-(unsigned long long)cardDisappearEvent;
-(void)setCardDisappearEvent:(unsigned long long)arg1 ;
@end
