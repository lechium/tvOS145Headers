/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMPersonSuggestion.h>

@class NSString, CNContact, PHPerson, PHFetchResult, PXRecipientTransport;

@interface PXCMMPhotoKitPersonSuggestion : NSObject <PXCMMPersonSuggestion> {

	CNContact* _fetchQueue_linkedContact;
	NSString* _localizedName;
	PHPerson* _person;
	PHFetchResult* _keyFaceFetchResult;
	PHFetchResult* _keyAssetFetchResult;
	PXRecipientTransport* _bestTransport;

}

@property (nonatomic,retain) PXRecipientTransport * bestTransport;               //@synthesize bestTransport=_bestTransport - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                                //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNContact * linkedContact; 
@property (nonatomic,readonly) PHFetchResult * keyFaceFetchResult;               //@synthesize keyFaceFetchResult=_keyFaceFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetFetchResult;              //@synthesize keyAssetFetchResult=_keyAssetFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_contactFetchQueue;
+(id)personSuggestionWithPerson:(id)arg1 ;
+(id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 ;
+(id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)localizedName;
-(PHPerson *)person;
-(CNContact *)linkedContact;
-(BOOL)matchesRecipientInRecipients:(id)arg1 ;
-(id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3 ;
-(id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1 ;
-(id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1 ;
-(id)personSuggestionUpdatedPerson:(id)arg1 ;
-(id)_linkedContactForPerson:(id)arg1 ;
-(void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1 ;
-(PHFetchResult *)keyFaceFetchResult;
-(PHFetchResult *)keyAssetFetchResult;
-(PXRecipientTransport *)bestTransport;
-(void)setBestTransport:(PXRecipientTransport *)arg1 ;
@end

