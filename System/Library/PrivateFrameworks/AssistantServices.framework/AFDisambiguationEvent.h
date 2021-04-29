/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	long long _selectionType;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)itemIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setSelectionType:(long long)arg1 ;
-(long long)selectionType;
@end

