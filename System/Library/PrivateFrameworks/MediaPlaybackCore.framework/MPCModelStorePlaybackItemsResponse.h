/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPModelStoreEquivalencyMapping.h>
#import <libobjc.A.dylib/MPModelResponseDetailedKeepLocalStatusRequesting.h>
#import <libobjc.A.dylib/MPCModelPlaybackResponse.h>

@protocol OS_dispatch_source;
@class NSObject, MPStoreLibraryPersonalizationResponse, NSDictionary, NSDate, NSString;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting, MPCModelPlaybackResponse> {

	NSObject*<OS_dispatch_source> _invalidationTimer;
	BOOL _finalResponse;
	BOOL _invalidForPersonalization;
	MPStoreLibraryPersonalizationResponse* _personalizationResponse;
	NSDictionary* _localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
	NSDate* _invalidationDate;

}

@property (getter=isInvalidForPersonalization,nonatomic,readonly) BOOL invalidForPersonalization;              //@synthesize invalidForPersonalization=_invalidForPersonalization - In the implementation block
@property (nonatomic,copy) NSDictionary * localStoreAdamIDToEquivalencySourceStoreAdamIDMap;                   //@synthesize localStoreAdamIDToEquivalencySourceStoreAdamIDMap=_localStoreAdamIDToEquivalencySourceStoreAdamIDMap - In the implementation block
@property (nonatomic,readonly) MPStoreLibraryPersonalizationResponse * _personalizationResponse;               //@synthesize personalizationResponse=_personalizationResponse - In the implementation block
@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                                        //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,copy) NSDate * invalidationDate;                                                          //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_activeUserDidChangeNotification:(id)arg1 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg1 ;
-(MPStoreLibraryPersonalizationResponse *)_personalizationResponse;
-(id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1 ;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(void)setInvalidationDate:(NSDate *)arg1 ;
-(BOOL)isInvalidForPersonalization;
-(NSDictionary *)localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
-(void)setLocalStoreAdamIDToEquivalencySourceStoreAdamIDMap:(NSDictionary *)arg1 ;
-(NSDate *)invalidationDate;
@end

