/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject <NSExtensionRequestHandling, CSSearchableIndexDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)index:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)reindexAllSearchableItemsForIndex:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndexDidThrottle:(id)arg1 ;
-(void)searchableIndexDidFinishThrottle:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end

