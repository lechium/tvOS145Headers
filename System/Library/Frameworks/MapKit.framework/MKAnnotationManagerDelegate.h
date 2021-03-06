/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
-(BOOL)annotationManager:(id)arg1 shouldAnimateDeselectionOfAnnotation:(id)arg2 forSelectionOfAnnotation:(id)arg3;
-(BOOL)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2;
-(void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg1;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

@end

