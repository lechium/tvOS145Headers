/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying> {

	unsigned _itemFeedbackType;
	NSString* _itemString;

}

@property (nonatomic,readonly) NSString * itemString;                  //@synthesize itemString=_itemString - In the implementation block
@property (nonatomic,readonly) unsigned itemFeedbackType;              //@synthesize itemFeedbackType=_itemFeedbackType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForItemFeedbackType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItemString:(id)arg1 itemFeedbackType:(unsigned)arg2 ;
-(BOOL)isEqualToPPFeedbackItem:(id)arg1 ;
-(NSString *)itemString;
-(unsigned)itemFeedbackType;
@end

