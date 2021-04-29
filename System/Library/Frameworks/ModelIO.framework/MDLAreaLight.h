/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@interface MDLAreaLight : MDLPhysicallyPlausibleLight {

	float _areaRadius;
	float _aspect;
	 _superEllipticPower;

}

@property (assign,nonatomic) float areaRadius;                 //@synthesize areaRadius=_areaRadius - In the implementation block
@property (assign,nonatomic)  superEllipticPower;              //@synthesize superEllipticPower=_superEllipticPower - In the implementation block
@property (assign,nonatomic) float aspect;                     //@synthesize aspect=_aspect - In the implementation block
-(id)init;
-(float)aspect;
-(void)setAspect:(float)arg1 ;
-(void)setAreaRadius:(float)arg1 ;
-(void)setSuperEllipticPower:;
-(float)areaRadius;
-()superEllipticPower;
@end

