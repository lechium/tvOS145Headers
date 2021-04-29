/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>
#import <libobjc.A.dylib/VKRouteMatchedAnnotationPresentation.h>

@class GEORouteMatch, MKAnnotationView, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;                       //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) BOOL tracking; 
@property (assign,getter=isAnimatingAccuracy,nonatomic) BOOL animatingAccuracy; 
@property (assign,nonatomic) double presentationAccuracy; 
@property (nonatomic,readonly) double minimumAccuracy; 
@property (nonatomic,readonly) VKEdgeInsets annotationTrackingEdgeInsets; 
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(CGSize)presentationCoordinate;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(BOOL)tracking;
-(BOOL)isAnimatingAccuracy;
-(void)setAnimatingAccuracy:(BOOL)arg1 ;
-(double)presentationAccuracy;
-(void)setPresentationAccuracy:(double)arg1 ;
-(double)minimumAccuracy;
-(VKEdgeInsets)annotationTrackingEdgeInsets;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
@end

