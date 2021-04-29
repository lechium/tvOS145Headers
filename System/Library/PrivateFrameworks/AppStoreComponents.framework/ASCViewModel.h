/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class ASCAdamID, ASCViewMetrics;


@protocol ASCViewModel <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) ASCViewMetrics * metrics; 
@required
-(ASCViewMetrics *)metrics;
-(ASCAdamID *)id;

@end

