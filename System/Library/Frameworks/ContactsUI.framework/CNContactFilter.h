/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying> {

	BOOL _rankSortedResults;
	NSString* _fullTextString;

}

@property (nonatomic,copy) NSString * fullTextString;                //@synthesize fullTextString=_fullTextString - In the implementation block
@property (nonatomic,readonly) BOOL supportsSections; 
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (assign,nonatomic) BOOL rankSortedResults;                 //@synthesize rankSortedResults=_rankSortedResults - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSPredicate *)predicate;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setFullTextString:(NSString *)arg1 ;
-(NSString *)fullTextString;
-(BOOL)supportsSections;
-(BOOL)rankSortedResults;
-(void)setRankSortedResults:(BOOL)arg1 ;
@end
