/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSArray;

@interface CNPredicate : NSPredicate <NSCopying> {

	NSPredicate* _cn_predicate;
	BOOL _augmentMainStoreResults;
	NSArray* _mainStoreContactIdentifiers;

}

@property (nonatomic,retain) NSArray * mainStoreContactIdentifiers;              //@synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL augmentMainStoreResults;                       //@synthesize augmentMainStoreResults=_augmentMainStoreResults - In the implementation block
+(id)os_log;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)shortDebugDescription;
-(id)initWithPredicate:(id)arg1 ;
-(void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2 ;
-(void)setMainStoreContactIdentifiers:(NSArray *)arg1 ;
-(id)cn_predicate;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(NSArray *)mainStoreContactIdentifiers;
-(BOOL)augmentMainStoreResults;
-(void)setAugmentMainStoreResults:(BOOL)arg1 ;
@end

