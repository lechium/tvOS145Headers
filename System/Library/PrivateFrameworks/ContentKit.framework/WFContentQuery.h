/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentPredicate, NSArray, NSDictionary, NSSet;

@interface WFContentQuery : NSObject <WFContentPropertyContainer> {

	WFContentPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSDictionary* _userInfo;
	WFContentSlice _slice;

}

@property (nonatomic,readonly) WFContentPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                       //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) WFContentSlice slice;                          //@synthesize slice=_slice - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
-(id)description;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(WFContentPredicate *)predicate;
-(WFContentSlice)slice;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setSlice:(WFContentSlice)arg1 ;
-(NSSet *)containedProperties;
-(id)initWithPredicate:(id)arg1 ;
-(void)runWithObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithObjects:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(/*^block*/id)arg2 ;
@end

