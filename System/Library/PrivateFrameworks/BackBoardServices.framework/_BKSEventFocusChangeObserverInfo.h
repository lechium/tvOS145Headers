/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable> {

	BOOL _valid;
	unsigned long long _propertyUpdateGeneration;

}

@property (assign) unsigned long long propertyUpdateGeneration;              //@synthesize propertyUpdateGeneration=_propertyUpdateGeneration - In the implementation block
@property (getter=isValid) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(unsigned long long)propertyUpdateGeneration;
-(void)setPropertyUpdateGeneration:(unsigned long long)arg1 ;
-(void)setValid:(BOOL)arg1 ;
@end

