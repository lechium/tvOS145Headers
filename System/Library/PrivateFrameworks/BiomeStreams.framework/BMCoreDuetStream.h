/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BMStream.h>

@protocol _DKKnowledgeQuerying, _CDUserContext;
@class NSString, _DKEventQuery;

@interface BMCoreDuetStream : NSObject <BMStream> {

	NSString* _identifier;
	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;
	id<_CDUserContext> _context;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(_DKEventQuery *)query;
-(NSString *)identifier;
-(id<_CDUserContext>)context;
-(id<_DKKnowledgeQuerying>)store;
-(id)initWithKnowledgeStore:(id)arg1 clientContext:(id)arg2 identifier:(id)arg3 ;
-(id)publisherForQuery:(id)arg1 ;
@end

