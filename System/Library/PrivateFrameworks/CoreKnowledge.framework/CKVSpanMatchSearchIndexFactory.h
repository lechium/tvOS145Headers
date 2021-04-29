/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKVSpanMatchSearchIndexProvider.h>

@protocol CKVDatabaseSearcherProvider;
@class NSObject, CKVIndexManager, NSString;

@interface CKVSpanMatchSearchIndexFactory : NSObject <CKVSpanMatchSearchIndexProvider> {

	NSObject*<CKVDatabaseSearcherProvider> _databaseSearcherProvider;
	CKVIndexManager* _indexManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)makeSearchIndex;
-(id)initWithDatabaseSearcherProvider:(id)arg1 indexManager:(id)arg2 ;
@end

