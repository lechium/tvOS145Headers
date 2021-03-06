/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKCloudQueryHandler.h>
#import <TVContentPartnerKitUI/TVCKCloudCollectionQueryHandler.h>

@protocol TVCKCloudCollectionQueryHandler
@required
-(Class)entityClass;
-(id)foreignPersistentIDProperty;
-(Class)collectionClass;
-(id)orderingTermsForProperty:(id)arg1;
-(unsigned long long)dmapResponseHeaderCode;
-(id)blankProperty;

@end


@interface TVCKCloudCollectionQueryHandler : TVCKCloudQueryHandler <TVCKCloudCollectionQueryHandler>
-(Class)entityClass;
-(id)foreignPersistentIDProperty;
-(Class)collectionClass;
-(void)_handleQuery:(id)arg1 ;
-(void)_handleDAAPQuery:(id)arg1 ;
-(void)handleQuery:(id)arg1 withContext:(void*)arg2 ;
-(id)orderingTermsForProperty:(id)arg1 ;
-(unsigned long long)dmapResponseHeaderCode;
-(id)blankProperty;
-(id)_mlQueryForATVMediaQuery:(id)arg1 usingSections:(BOOL)arg2 ;
-(float)_durationOfAlbum:(unsigned long long)arg1 ;
@end

