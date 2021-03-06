/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding> {

	unsigned _sortOrder;
	NSPredicate* _predicate;
	NSArray* _additionalKeysToFetch;

}

@property (copy,readonly) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (copy,readonly) NSArray * additionalKeysToFetch;              //@synthesize additionalKeysToFetch=_additionalKeysToFetch - In the implementation block
@property (readonly) unsigned sortOrder;                                //@synthesize sortOrder=_sortOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(unsigned)sortOrder;
-(id)descriptionOfSortOrder;
-(id)descriptionOfKeysToFetch;
-(id)initWithPredicate:(id)arg1 additionalKeysToFetch:(id)arg2 sortOrder:(unsigned)arg3 ;
-(NSArray *)additionalKeysToFetch;
@end

