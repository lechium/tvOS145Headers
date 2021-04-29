/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOURLInfo, NSMutableArray, NSURL, NSArray;

@interface GEOURLInfoSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOURLInfo* _abExperimentURL;
	GEOURLInfo* _addressCorrectionInitURL;
	GEOURLInfo* _addressCorrectionTaggedLocationURL;
	GEOURLInfo* _addressCorrectionUpdateURL;
	NSMutableArray* _alternateResourcesURLs;
	GEOURLInfo* _analyticsCohortSessionURL;
	GEOURLInfo* _analyticsLongSessionURL;
	GEOURLInfo* _analyticsSessionlessURL;
	GEOURLInfo* _analyticsShortSessionURL;
	GEOURLInfo* _announcementsURL;
	GEOURLInfo* _authProxyURL;
	GEOURLInfo* _authenticatedClientFeatureFlagURL;
	GEOURLInfo* _backgroundDispatcherURL;
	GEOURLInfo* _backgroundRevGeoURL;
	GEOURLInfo* _batchReverseGeocoderPlaceRequestURL;
	GEOURLInfo* _batchReverseGeocoderURL;
	GEOURLInfo* _batchTrafficProbeURL;
	GEOURLInfo* _bluePOIDispatcherURL;
	GEOURLInfo* _businessPortalBaseURL;
	GEOURLInfo* _directionsURL;
	GEOURLInfo* _dispatcherURL;
	GEOURLInfo* _enrichmentSubmissionURL;
	GEOURLInfo* _etaURL;
	GEOURLInfo* _feedbackLookupURL;
	GEOURLInfo* _feedbackSubmissionURL;
	GEOURLInfo* _junctionImageServiceURL;
	GEOURLInfo* _logMessageUsageURL;
	GEOURLInfo* _logMessageUsageV3URL;
	GEOURLInfo* _muninBaseURL;
	GEOURLInfo* _poiBusynessActivityCollectionURL;
	GEOURLInfo* _polyLocationShiftURL;
	GEOURLInfo* _pressureProbeDataURL;
	GEOURLInfo* _proactiveAppClipURL;
	GEOURLInfo* _proactiveRoutingURL;
	GEOURLInfo* _problemCategoriesURL;
	GEOURLInfo* _problemOptInURL;
	GEOURLInfo* _problemStatusURL;
	GEOURLInfo* _problemSubmissionURL;
	GEOURLInfo* _realtimeTrafficProbeURL;
	GEOURLInfo* _resourcesURL;
	GEOURLInfo* _reverseGeocoderVersionsURL;
	GEOURLInfo* _searchAttributionManifestURL;
	GEOURLInfo* _simpleETAURL;
	GEOURLInfo* _spatialLookupURL;
	GEOURLInfo* _tokenAuthenticationURL;
	GEOURLInfo* _ugcLogDiscardURL;
	GEOURLInfo* _webModuleBaseURL;
	GEOURLInfo* _wifiConnectionQualityProbeURL;
	GEOURLInfo* _wifiQualityTileURL;
	GEOURLInfo* _wifiQualityURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	struct {
		unsigned has_dataSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abExperimentURL : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionTaggedLocationURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_alternateResourcesURLs : 1;
		unsigned read_analyticsCohortSessionURL : 1;
		unsigned read_analyticsLongSessionURL : 1;
		unsigned read_analyticsSessionlessURL : 1;
		unsigned read_analyticsShortSessionURL : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_authProxyURL : 1;
		unsigned read_authenticatedClientFeatureFlagURL : 1;
		unsigned read_backgroundDispatcherURL : 1;
		unsigned read_backgroundRevGeoURL : 1;
		unsigned read_batchReverseGeocoderPlaceRequestURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_batchTrafficProbeURL : 1;
		unsigned read_bluePOIDispatcherURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_enrichmentSubmissionURL : 1;
		unsigned read_etaURL : 1;
		unsigned read_feedbackLookupURL : 1;
		unsigned read_feedbackSubmissionURL : 1;
		unsigned read_junctionImageServiceURL : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_logMessageUsageV3URL : 1;
		unsigned read_muninBaseURL : 1;
		unsigned read_poiBusynessActivityCollectionURL : 1;
		unsigned read_polyLocationShiftURL : 1;
		unsigned read_pressureProbeDataURL : 1;
		unsigned read_proactiveAppClipURL : 1;
		unsigned read_proactiveRoutingURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_realtimeTrafficProbeURL : 1;
		unsigned read_resourcesURL : 1;
		unsigned read_reverseGeocoderVersionsURL : 1;
		unsigned read_searchAttributionManifestURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned read_tokenAuthenticationURL : 1;
		unsigned read_ugcLogDiscardURL : 1;
		unsigned read_webModuleBaseURL : 1;
		unsigned read_wifiConnectionQualityProbeURL : 1;
		unsigned read_wifiQualityTileURL : 1;
		unsigned read_wifiQualityURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSURL * resourcesProxyURL; 
@property (nonatomic,readonly) NSArray * alternateResourcesNSURLs; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) GEOURLInfo * resourcesURL; 
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) GEOURLInfo * searchAttributionManifestURL; 
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) GEOURLInfo * directionsURL; 
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) GEOURLInfo * etaURL; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) GEOURLInfo * batchReverseGeocoderURL; 
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) GEOURLInfo * simpleETAURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionInitURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) GEOURLInfo * polyLocationShiftURL; 
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * problemSubmissionURL; 
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) GEOURLInfo * problemStatusURL; 
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) GEOURLInfo * reverseGeocoderVersionsURL; 
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) GEOURLInfo * problemCategoriesURL; 
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) GEOURLInfo * announcementsURL; 
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * dispatcherURL; 
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) GEOURLInfo * problemOptInURL; 
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) GEOURLInfo * abExperimentURL; 
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) GEOURLInfo * businessPortalBaseURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageURL; 
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) GEOURLInfo * spatialLookupURL; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * realtimeTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * batchTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasProactiveRoutingURL; 
@property (nonatomic,retain) GEOURLInfo * proactiveRoutingURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageV3URL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageV3URL; 
@property (nonatomic,readonly) BOOL hasBackgroundDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBluePOIDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * bluePOIDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBackgroundRevGeoURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundRevGeoURL; 
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeURL; 
@property (nonatomic,retain) GEOURLInfo * wifiConnectionQualityProbeURL; 
@property (nonatomic,readonly) BOOL hasMuninBaseURL; 
@property (nonatomic,retain) GEOURLInfo * muninBaseURL; 
@property (nonatomic,readonly) BOOL hasAuthProxyURL; 
@property (nonatomic,retain) GEOURLInfo * authProxyURL; 
@property (nonatomic,readonly) BOOL hasWifiQualityURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityURL; 
@property (nonatomic,readonly) BOOL hasFeedbackSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackSubmissionURL; 
@property (nonatomic,readonly) BOOL hasFeedbackLookupURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackLookupURL; 
@property (nonatomic,readonly) BOOL hasJunctionImageServiceURL; 
@property (nonatomic,retain) GEOURLInfo * junctionImageServiceURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsCohortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsCohortSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsLongSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsLongSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsShortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsShortSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsSessionlessURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsSessionlessURL; 
@property (nonatomic,readonly) BOOL hasWebModuleBaseURL; 
@property (nonatomic,retain) GEOURLInfo * webModuleBaseURL; 
@property (nonatomic,readonly) BOOL hasWifiQualityTileURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityTileURL; 
@property (nonatomic,retain) NSMutableArray * alternateResourcesURLs; 
@property (nonatomic,readonly) BOOL hasTokenAuthenticationURL; 
@property (nonatomic,retain) GEOURLInfo * tokenAuthenticationURL; 
@property (nonatomic,readonly) BOOL hasAuthenticatedClientFeatureFlagURL; 
@property (nonatomic,retain) GEOURLInfo * authenticatedClientFeatureFlagURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionTaggedLocationURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionTaggedLocationURL; 
@property (nonatomic,readonly) BOOL hasProactiveAppClipURL; 
@property (nonatomic,retain) GEOURLInfo * proactiveAppClipURL; 
@property (nonatomic,readonly) BOOL hasEnrichmentSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * enrichmentSubmissionURL; 
@property (nonatomic,readonly) BOOL hasUgcLogDiscardURL; 
@property (nonatomic,retain) GEOURLInfo * ugcLogDiscardURL; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderPlaceRequestURL; 
@property (nonatomic,retain) GEOURLInfo * batchReverseGeocoderPlaceRequestURL; 
@property (nonatomic,readonly) BOOL hasPressureProbeDataURL; 
@property (nonatomic,retain) GEOURLInfo * pressureProbeDataURL; 
@property (nonatomic,readonly) BOOL hasPoiBusynessActivityCollectionURL; 
@property (nonatomic,retain) GEOURLInfo * poiBusynessActivityCollectionURL; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateResourcesURLType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(unsigned)dataSet;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(GEOURLInfo *)directionsURL;
-(GEOURLInfo *)etaURL;
-(GEOURLInfo *)batchReverseGeocoderURL;
-(GEOURLInfo *)simpleETAURL;
-(GEOURLInfo *)addressCorrectionInitURL;
-(GEOURLInfo *)addressCorrectionUpdateURL;
-(GEOURLInfo *)problemSubmissionURL;
-(GEOURLInfo *)problemStatusURL;
-(GEOURLInfo *)problemCategoriesURL;
-(GEOURLInfo *)announcementsURL;
-(GEOURLInfo *)dispatcherURL;
-(GEOURLInfo *)problemOptInURL;
-(GEOURLInfo *)businessPortalBaseURL;
-(GEOURLInfo *)logMessageUsageURL;
-(GEOURLInfo *)spatialLookupURL;
-(void)setDirectionsURL:(GEOURLInfo *)arg1 ;
-(void)setEtaURL:(GEOURLInfo *)arg1 ;
-(void)setBatchReverseGeocoderURL:(GEOURLInfo *)arg1 ;
-(void)setSimpleETAURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionInitURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(GEOURLInfo *)arg1 ;
-(void)setProblemSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setProblemStatusURL:(GEOURLInfo *)arg1 ;
-(void)setProblemCategoriesURL:(GEOURLInfo *)arg1 ;
-(void)setAnnouncementsURL:(GEOURLInfo *)arg1 ;
-(void)setDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setProblemOptInURL:(GEOURLInfo *)arg1 ;
-(void)setBusinessPortalBaseURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageURL:(GEOURLInfo *)arg1 ;
-(void)setSpatialLookupURL:(GEOURLInfo *)arg1 ;
-(BOOL)hasDirectionsURL;
-(BOOL)hasEtaURL;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasSimpleETAURL;
-(BOOL)hasAddressCorrectionInitURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)hasProblemStatusURL;
-(BOOL)hasProblemCategoriesURL;
-(BOOL)hasAnnouncementsURL;
-(BOOL)hasDispatcherURL;
-(BOOL)hasProblemOptInURL;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasLogMessageUsageURL;
-(BOOL)hasSpatialLookupURL;
-(GEOURLInfo *)resourcesURL;
-(GEOURLInfo *)searchAttributionManifestURL;
-(GEOURLInfo *)polyLocationShiftURL;
-(GEOURLInfo *)reverseGeocoderVersionsURL;
-(GEOURLInfo *)abExperimentURL;
-(GEOURLInfo *)realtimeTrafficProbeURL;
-(GEOURLInfo *)batchTrafficProbeURL;
-(GEOURLInfo *)proactiveRoutingURL;
-(GEOURLInfo *)logMessageUsageV3URL;
-(GEOURLInfo *)backgroundDispatcherURL;
-(GEOURLInfo *)bluePOIDispatcherURL;
-(GEOURLInfo *)backgroundRevGeoURL;
-(GEOURLInfo *)wifiConnectionQualityProbeURL;
-(GEOURLInfo *)muninBaseURL;
-(GEOURLInfo *)authProxyURL;
-(void)setResourcesURL:(GEOURLInfo *)arg1 ;
-(void)setSearchAttributionManifestURL:(GEOURLInfo *)arg1 ;
-(void)setPolyLocationShiftURL:(GEOURLInfo *)arg1 ;
-(void)setReverseGeocoderVersionsURL:(GEOURLInfo *)arg1 ;
-(void)setAbExperimentURL:(GEOURLInfo *)arg1 ;
-(void)setRealtimeTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setBatchTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setProactiveRoutingURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageV3URL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBluePOIDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundRevGeoURL:(GEOURLInfo *)arg1 ;
-(void)setWifiConnectionQualityProbeURL:(GEOURLInfo *)arg1 ;
-(void)setMuninBaseURL:(GEOURLInfo *)arg1 ;
-(void)setAuthProxyURL:(GEOURLInfo *)arg1 ;
-(BOOL)hasResourcesURL;
-(BOOL)hasSearchAttributionManifestURL;
-(BOOL)hasPolyLocationShiftURL;
-(BOOL)hasReverseGeocoderVersionsURL;
-(BOOL)hasAbExperimentURL;
-(BOOL)hasRealtimeTrafficProbeURL;
-(BOOL)hasBatchTrafficProbeURL;
-(BOOL)hasProactiveRoutingURL;
-(BOOL)hasLogMessageUsageV3URL;
-(BOOL)hasBackgroundDispatcherURL;
-(BOOL)hasBluePOIDispatcherURL;
-(BOOL)hasBackgroundRevGeoURL;
-(BOOL)hasWifiConnectionQualityProbeURL;
-(BOOL)hasMuninBaseURL;
-(BOOL)hasAuthProxyURL;
-(GEOURLInfo *)wifiQualityURL;
-(GEOURLInfo *)feedbackSubmissionURL;
-(GEOURLInfo *)feedbackLookupURL;
-(GEOURLInfo *)junctionImageServiceURL;
-(GEOURLInfo *)analyticsCohortSessionURL;
-(GEOURLInfo *)analyticsLongSessionURL;
-(GEOURLInfo *)analyticsShortSessionURL;
-(GEOURLInfo *)analyticsSessionlessURL;
-(GEOURLInfo *)webModuleBaseURL;
-(GEOURLInfo *)wifiQualityTileURL;
-(GEOURLInfo *)tokenAuthenticationURL;
-(GEOURLInfo *)authenticatedClientFeatureFlagURL;
-(GEOURLInfo *)addressCorrectionTaggedLocationURL;
-(GEOURLInfo *)proactiveAppClipURL;
-(GEOURLInfo *)enrichmentSubmissionURL;
-(GEOURLInfo *)ugcLogDiscardURL;
-(GEOURLInfo *)batchReverseGeocoderPlaceRequestURL;
-(GEOURLInfo *)pressureProbeDataURL;
-(GEOURLInfo *)poiBusynessActivityCollectionURL;
-(void)setWifiQualityURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackLookupURL:(GEOURLInfo *)arg1 ;
-(void)setJunctionImageServiceURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsCohortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsLongSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsShortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsSessionlessURL:(GEOURLInfo *)arg1 ;
-(void)setWebModuleBaseURL:(GEOURLInfo *)arg1 ;
-(void)setWifiQualityTileURL:(GEOURLInfo *)arg1 ;
-(void)addAlternateResourcesURL:(id)arg1 ;
-(void)setTokenAuthenticationURL:(GEOURLInfo *)arg1 ;
-(void)setAuthenticatedClientFeatureFlagURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionTaggedLocationURL:(GEOURLInfo *)arg1 ;
-(void)setProactiveAppClipURL:(GEOURLInfo *)arg1 ;
-(void)setEnrichmentSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setUgcLogDiscardURL:(GEOURLInfo *)arg1 ;
-(void)setBatchReverseGeocoderPlaceRequestURL:(GEOURLInfo *)arg1 ;
-(void)setPressureProbeDataURL:(GEOURLInfo *)arg1 ;
-(void)setPoiBusynessActivityCollectionURL:(GEOURLInfo *)arg1 ;
-(unsigned long long)alternateResourcesURLsCount;
-(void)clearAlternateResourcesURLs;
-(id)alternateResourcesURLAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasWifiQualityURL;
-(BOOL)hasFeedbackSubmissionURL;
-(BOOL)hasFeedbackLookupURL;
-(BOOL)hasJunctionImageServiceURL;
-(BOOL)hasAnalyticsCohortSessionURL;
-(BOOL)hasAnalyticsLongSessionURL;
-(BOOL)hasAnalyticsShortSessionURL;
-(BOOL)hasAnalyticsSessionlessURL;
-(BOOL)hasWebModuleBaseURL;
-(BOOL)hasWifiQualityTileURL;
-(NSMutableArray *)alternateResourcesURLs;
-(void)setAlternateResourcesURLs:(NSMutableArray *)arg1 ;
-(BOOL)hasTokenAuthenticationURL;
-(BOOL)hasAuthenticatedClientFeatureFlagURL;
-(BOOL)hasAddressCorrectionTaggedLocationURL;
-(BOOL)hasProactiveAppClipURL;
-(BOOL)hasEnrichmentSubmissionURL;
-(BOOL)hasUgcLogDiscardURL;
-(BOOL)hasBatchReverseGeocoderPlaceRequestURL;
-(BOOL)hasPressureProbeDataURL;
-(BOOL)hasPoiBusynessActivityCollectionURL;
-(NSURL *)resourcesProxyURL;
-(NSArray *)alternateResourcesNSURLs;
@end

