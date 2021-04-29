/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MKMapSnapshotView, NSMutableArray, NSLayoutConstraint, NSError, NSTimer, MKMapItem;

@interface MKMapItemView : UIView {

	MKMapSnapshotView* _snapshotView;
	CGSize _coordinateSpan;
	/*^block*/id _mapItemloadedCompletionHandler;
	NSMutableArray* _snapshotConstraints;
	NSLayoutConstraint* _snapshotWidthConstraint;
	NSError* _snapshotError;
	NSTimer* _loadTimeoutTimer;
	CGSize _sizeWhenLastLoaded;
	BOOL _loadCalledOnce;
	unsigned long long _signpostID;
	BOOL _loadingMuninView;
	BOOL _shouldResolveMapItem;
	BOOL _shouldShowBorders;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) BOOL shouldResolveMapItem;              //@synthesize shouldResolveMapItem=_shouldResolveMapItem - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBorders;                 //@synthesize shouldShowBorders=_shouldShowBorders - In the implementation block
-(void)dealloc;
-(void)cancel;
-(MKMapItem *)mapItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_resetState;
-(id)_annotationView;
-(BOOL)_areBoundsValid;
-(void)_callCompletionHandlerWithInvalidBoundsError;
-(CGSize)_clampCoordinateSpan:(CGSize)arg1 ;
-(void)_takeSnapshotCompleted;
-(void)_takeSnapshotWithCompletionHandler:(/*^block*/id)arg1 isReload:(BOOL)arg2 ;
-(void)_callCompletionHandler;
-(void)_handleTapOnSnapshot:(id)arg1 ;
-(void)_setupSnapshotConstraints;
-(id)_deriveSnapshotOptions:(BOOL)arg1 ;
-(void)_reloadSnapshot;
-(id)_customAnnotation;
-(void)_renderMapItem;
-(void)loadMapItem:(id)arg1 coordinateSpan:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)triggerAnimation;
-(BOOL)shouldResolveMapItem;
-(void)setShouldResolveMapItem:(BOOL)arg1 ;
-(BOOL)shouldShowBorders;
-(void)setShouldShowBorders:(BOOL)arg1 ;
@end

