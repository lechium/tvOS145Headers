/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface _PFPersistentHistoryFetchModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)newFetchHistoryModelForCoordinator:(id)arg1 andOptions:(id)arg2 ;
+(id)ancillaryModelNamespace;
+(unsigned long long)ancillaryEntityOffset;
+(void)_invalidateStaticCaches;
+(unsigned long long)ancillaryEntityCount;
@end

