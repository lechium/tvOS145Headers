/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HBMOrderIDGenerator.h>

@protocol HBMOrderIDGenerator <NSObject>
@required
-(double)nextOrderID;

@end


@class NSString;

@interface HBMOrderIDGenerator : NSObject <HBMOrderIDGenerator> {

	double _stride;
	double _current;

}

@property (nonatomic,readonly) double current;                      //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) double stride;                       //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)current;
-(double)stride;
-(double)nextOrderID;
-(id)initWithBase:(double)arg1 stride:(double)arg2 ;
@end

