/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MKMapViewSuspendedEffectsToken.h>

@protocol _MKMapViewSuspendedEffectsToken <NSObject>
@required
-(void)invalidate;

@end


@class MKMapView, NSString;

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken> {

	BOOL _invalidated;
	MKMapView* _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithOwner:(id)arg1 ;
@end

