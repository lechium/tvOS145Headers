/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding> {

	CTCarrierSpaceUsageInfo* _usageInfo;
	CTCarrierSpacePlansInfo* _plansInfo;
	CTCarrierSpaceAppsInfo* _appsInfo;

}

@property (nonatomic,retain) CTCarrierSpaceUsageInfo * usageInfo;              //@synthesize usageInfo=_usageInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpacePlansInfo * plansInfo;              //@synthesize plansInfo=_plansInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceAppsInfo * appsInfo;                //@synthesize appsInfo=_appsInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTCarrierSpaceUsageInfo *)usageInfo;
-(CTCarrierSpacePlansInfo *)plansInfo;
-(CTCarrierSpaceAppsInfo *)appsInfo;
-(void)setUsageInfo:(CTCarrierSpaceUsageInfo *)arg1 ;
-(void)setPlansInfo:(CTCarrierSpacePlansInfo *)arg1 ;
-(void)setAppsInfo:(CTCarrierSpaceAppsInfo *)arg1 ;
@end

