/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLCTMPairingProcessor : PLPairingProcessor {

	BOOL _deferredProcessingNeeded;

}

@property (assign,nonatomic) BOOL deferredProcessingNeeded;              //@synthesize deferredProcessingNeeded=_deferredProcessingNeeded - In the implementation block
-(void)setDeferredProcessingNeeded:(BOOL)arg1 ;
-(BOOL)deferredProcessingNeeded;
-(id)groupIDForAsset:(id)arg1 ;
-(id)firstGroupFromAssets:(id)arg1 ;
-(id)combinePair:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg1 ;
-(id)ctmFetchRequestWithPredicate:(id)arg1 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg1 ;
-(id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(BOOL)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3 ;
@end

