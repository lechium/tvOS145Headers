/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFSearchResult, SFCardSection, SFPunchout;

@interface SFUserReportFeedback : SFFeedback <NSCopying> {

	SFSearchResult* _result;
	SFCardSection* _cardSection;
	SFPunchout* _userSelection;

}

@property (nonatomic,retain) SFSearchResult * result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SFCardSection * cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,retain) SFPunchout * userSelection;               //@synthesize userSelection=_userSelection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(SFCardSection *)cardSection;
-(SFPunchout *)userSelection;
-(void)setUserSelection:(SFPunchout *)arg1 ;
-(id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3 ;
-(void)setCardSection:(SFCardSection *)arg1 ;
@end

