/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreKnowledge/CKVServiceFactory.h>
#import <libobjc.A.dylib/CKVSearchServiceProvider.h>

@protocol CKVDatabaseSearcherProvider, CKVSpanMatchSearchIndexProvider, CKVSpanMatchResultInterpreterProvider;
@class NSObject, NSString;

@interface CKVSearchServiceFactory : CKVServiceFactory <CKVSearchServiceProvider> {

	NSObject*<CKVDatabaseSearcherProvider> _databaseSearcherProvider;
	NSObject*<CKVSpanMatchSearchIndexProvider> _searchIndexProvider;
	NSObject*<CKVSpanMatchResultInterpreterProvider> _interpreterProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 ;
-(id)searchService;
@end
