/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPeopleMeViewControllerDataSource.h>

@protocol PXPerson;
@class CNContact, NSString;

@interface PXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource> {

	BOOL _requestedSuggestedPerson;
	BOOL _requestedMeContact;
	id<PXPerson> _suggestedPerson;
	CNContact* _meContact;

}

@property (nonatomic,retain) id<PXPerson> suggestedPerson;                                                  //@synthesize suggestedPerson=_suggestedPerson - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                         //@synthesize meContact=_meContact - In the implementation block
@property (assign,getter=hasRequestedSuggestedPerson,nonatomic) BOOL requestedSuggestedPerson;              //@synthesize requestedSuggestedPerson=_requestedSuggestedPerson - In the implementation block
@property (assign,getter=hasRequestedMeContact,nonatomic) BOOL requestedMeContact;                          //@synthesize requestedMeContact=_requestedMeContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(id<PXPerson>)suggestedPerson;
-(void)setSuggestedPerson:(id<PXPerson>)arg1 ;
-(id)suggestedPersonForMeViewController:(id)arg1 ;
-(void)userDidAnswerMeViewController:(id)arg1 withResponse:(BOOL)arg2 suggestedPerson:(id)arg3 ;
-(void)hasSuggestedPersonForMeWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestMeContactWithCompletion:(/*^block*/id)arg1 ;
-(id)_suggestedPersonForMe;
-(void)_persistSuggestedPersonAsMe;
-(id)_fetchPersonWithUri:(id)arg1 ;
-(BOOL)hasRequestedSuggestedPerson;
-(void)setRequestedSuggestedPerson:(BOOL)arg1 ;
-(BOOL)hasRequestedMeContact;
-(void)setRequestedMeContact:(BOOL)arg1 ;
@end
