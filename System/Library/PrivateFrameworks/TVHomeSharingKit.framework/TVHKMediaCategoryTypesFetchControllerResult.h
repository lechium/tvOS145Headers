/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, TVHKCollectionChangeSet;

@interface TVHKMediaCategoryTypesFetchControllerResult : NSObject {

	long long _queryReason;
	NSArray* _mediaCategoryTypes;
	TVHKCollectionChangeSet* _mediaCategoryTypesChangeSet;

}

@property (nonatomic,retain) TVHKCollectionChangeSet * mediaCategoryTypesChangeSet;              //@synthesize mediaCategoryTypesChangeSet=_mediaCategoryTypesChangeSet - In the implementation block
@property (nonatomic,readonly) long long queryReason;                                            //@synthesize queryReason=_queryReason - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCategoryTypes;                                //@synthesize mediaCategoryTypes=_mediaCategoryTypes - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(long long)queryReason;
-(id)initWithQueryReason:(long long)arg1 mediaCategoryTypes:(id)arg2 ;
-(void)setMediaCategoryTypesChangeSet:(TVHKCollectionChangeSet *)arg1 ;
-(NSArray *)mediaCategoryTypes;
-(TVHKCollectionChangeSet *)mediaCategoryTypesChangeSet;
@end

