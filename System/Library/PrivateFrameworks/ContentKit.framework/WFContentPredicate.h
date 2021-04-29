/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(id)truePredicate;
+(id)falsePredicate;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)evaluateWithObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

