/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PPEventQuery.h>

@class NSSet;

@interface PPSuggestedEventQuery : PPEventQuery {

	NSSet* _matchingCategories;

}

@property (nonatomic,retain) NSSet * matchingCategories;              //@synthesize matchingCategories=_matchingCategories - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)matchingCategories;
-(void)setMatchingCategories:(NSSet *)arg1 ;
@end

