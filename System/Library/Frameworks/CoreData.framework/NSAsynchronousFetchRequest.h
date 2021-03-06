/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	long long _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                                  //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) long long estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(id)description;
-(void)dealloc;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)estimatedResultCount;
-(void)setEstimatedResultCount:(long long)arg1 ;
@end

