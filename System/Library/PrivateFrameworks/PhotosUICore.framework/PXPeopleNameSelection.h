/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPerson;
@class CNContact, NSString;

@interface PXPeopleNameSelection : NSObject {

	unsigned long long _selectionType;
	id<PXPerson> _person;
	CNContact* _contact;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,readonly) id<PXPerson> person;                           //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)localizedName;
-(id<PXPerson>)person;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)selectionType;
-(id)initWithSelectedPerson:(id)arg1 ;
-(id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(unsigned long long)arg4 ;
-(void)setLinkedPerson:(id)arg1 ;
@end

