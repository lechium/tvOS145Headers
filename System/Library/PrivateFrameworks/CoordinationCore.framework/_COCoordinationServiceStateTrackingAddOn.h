/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/COMeshAddOn.h>

@class COCoordinationService;

@interface _COCoordinationServiceStateTrackingAddOn : COMeshAddOn {

	COCoordinationService* _service;

}

@property (assign,nonatomic,__weak) COCoordinationService * service;              //@synthesize service=_service - In the implementation block
-(COCoordinationService *)service;
-(void)setService:(COCoordinationService *)arg1 ;
-(void)didStopMeshController:(id)arg1 ;
@end

