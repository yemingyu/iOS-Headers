/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, NSData, NSMutableArray, NSString;

@interface GEOPlaceSearchRequest : PBRequest
{
    CDStruct_612aec5b _sessionGUID;
    CDStruct_56d48c16 _additionalPlaceTypes;
    CDStruct_cb16bb10 _businessIDs;
    CDStruct_815f15fd _placeIDs;
    CDStruct_0756942c _searchContextSubstring;
    CDStruct_0756942c *_searchSubstrings;
    unsigned int _searchSubstringsCount;
    unsigned int _searchSubstringsSpace;
    double _distanceTraveled;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    NSMutableArray *_filterByBusinessTelephones;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    GEOAddress *_preserveFields;
    int _resultOffset;
    NSString *_search;
    NSString *_searchContext;
    int _searchSource;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    int _sessionID;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
    BOOL _allowABTestResponse;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRevgeoRequestTemplate;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isFromAPI;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int sessionGUID:1;
        unsigned int searchContextSubstring:1;
        unsigned int distanceTraveled:1;
        unsigned int geoId:1;
        unsigned int intersectingGeoId:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int timestamp:1;
        unsigned int businessSortOrder:1;
        unsigned int knownAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int maxBusinessReviews:1;
        unsigned int maxResults:1;
        unsigned int resultOffset:1;
        unsigned int searchSource:1;
        unsigned int sequenceNumber:1;
        unsigned int sessionID:1;
        unsigned int transportTypeForTravelTimes:1;
        unsigned int allowABTestResponse:1;
        unsigned int excludeAddressInResults:1;
        unsigned int includeBusinessCategories:1;
        unsigned int includeBusinessRating:1;
        unsigned int includeEntryPoints:1;
        unsigned int includeFeatureSets:1;
        unsigned int includeGeoId:1;
        unsigned int includeMatchedToken:1;
        unsigned int includePhonetics:1;
        unsigned int includeQuads:1;
        unsigned int includeRevgeoRequestTemplate:1;
        unsigned int includeSpokenNames:1;
        unsigned int includeStatusCodeInfo:1;
        unsigned int includeSuggestionsOnly:1;
        unsigned int includeTravelTime:1;
        unsigned int includeUnmatchedStrings:1;
        unsigned int isFromAPI:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

@property(nonatomic) int searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) BOOL includeMatchedToken; // @synthesize includeMatchedToken=_includeMatchedToken;
@property(nonatomic) BOOL includeRevgeoRequestTemplate; // @synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate;
@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property(retain, nonatomic) GEOLatLng *knownLocation; // @synthesize knownLocation=_knownLocation;
@property(nonatomic) unsigned long long intersectingGeoId; // @synthesize intersectingGeoId=_intersectingGeoId;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) BOOL includeFeatureSets; // @synthesize includeFeatureSets=_includeFeatureSets;
@property(retain, nonatomic) GEOIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property(nonatomic) BOOL includeUnmatchedStrings; // @synthesize includeUnmatchedStrings=_includeUnmatchedStrings;
@property(retain, nonatomic) GEOAddress *preserveFields; // @synthesize preserveFields=_preserveFields;
@property(nonatomic) BOOL includeStatusCodeInfo; // @synthesize includeStatusCodeInfo=_includeStatusCodeInfo;
@property(nonatomic) CDStruct_0756942c searchContextSubstring; // @synthesize searchContextSubstring=_searchContextSubstring;
@property(retain, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) BOOL includeGeoId; // @synthesize includeGeoId=_includeGeoId;
@property(nonatomic) BOOL excludeAddressInResults; // @synthesize excludeAddressInResults=_excludeAddressInResults;
@property(nonatomic) BOOL includeQuads; // @synthesize includeQuads=_includeQuads;
@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property(nonatomic) int transportTypeForTravelTimes; // @synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes;
@property(nonatomic) BOOL includeTravelTime; // @synthesize includeTravelTime=_includeTravelTime;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSString *deviceTimeZone; // @synthesize deviceTimeZone=_deviceTimeZone;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(nonatomic) BOOL includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
@property(nonatomic) double distanceTraveled; // @synthesize distanceTraveled=_distanceTraveled;
@property(nonatomic) double timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(nonatomic) double timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(retain, nonatomic) NSMutableArray *filterByBusinessTelephones; // @synthesize filterByBusinessTelephones=_filterByBusinessTelephones;
@property(nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(nonatomic) BOOL suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(retain, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;
@property(nonatomic) BOOL allowABTestResponse; // @synthesize allowABTestResponse=_allowABTestResponse;
@property(nonatomic) BOOL structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property(nonatomic) BOOL includeSuggestionsOnly; // @synthesize includeSuggestionsOnly=_includeSuggestionsOnly;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) GEOBusinessOptions *businessOptions; // @synthesize businessOptions=_businessOptions;
@property(nonatomic) BOOL includeEntryPoints; // @synthesize includeEntryPoints=_includeEntryPoints;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys; // @synthesize filterByBusinessCategorys=_filterByBusinessCategorys;
@property(nonatomic) int maxBusinessReviews; // @synthesize maxBusinessReviews=_maxBusinessReviews;
@property(nonatomic) BOOL includeBusinessCategories; // @synthesize includeBusinessCategories=_includeBusinessCategories;
@property(nonatomic) BOOL includeBusinessRating; // @synthesize includeBusinessRating=_includeBusinessRating;
@property(nonatomic) int businessSortOrder; // @synthesize businessSortOrder=_businessSortOrder;
@property(nonatomic) CDStruct_612aec5b sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(nonatomic) int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int resultOffset; // @synthesize resultOffset=_resultOffset;
@property(nonatomic) BOOL includePhonetics; // @synthesize includePhonetics=_includePhonetics;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *search; // @synthesize search=_search;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSearchSource;
@property(nonatomic) BOOL hasIncludeMatchedToken;
@property(nonatomic) BOOL hasIncludeRevgeoRequestTemplate;
@property(nonatomic) BOOL hasKnownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownLocation;
@property(nonatomic) BOOL hasIntersectingGeoId;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) BOOL hasIncludeFeatureSets;
@property(readonly, nonatomic) BOOL hasIndexFilter;
@property(nonatomic) BOOL hasIncludeUnmatchedStrings;
@property(readonly, nonatomic) BOOL hasPreserveFields;
@property(nonatomic) BOOL hasIncludeStatusCodeInfo;
@property(nonatomic) BOOL hasSearchContextSubstring;
@property(readonly, nonatomic) BOOL hasSearchContext;
@property(nonatomic) BOOL hasIncludeGeoId;
- (void)setSearchSubstrings:(CDStruct_0756942c *)arg1 count:(unsigned int)arg2;
- (CDStruct_0756942c)searchSubstringAtIndex:(unsigned int)arg1;
- (void)addSearchSubstring:(CDStruct_0756942c)arg1;
- (void)clearSearchSubstrings;
@property(readonly, nonatomic) CDStruct_0756942c *searchSubstrings;
@property(readonly, nonatomic) unsigned int searchSubstringsCount;
@property(nonatomic) BOOL hasExcludeAddressInResults;
@property(nonatomic) BOOL hasIncludeQuads;
@property(nonatomic) BOOL hasGeoId;
@property(nonatomic) BOOL hasTransportTypeForTravelTimes;
@property(nonatomic) BOOL hasIncludeTravelTime;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(readonly, nonatomic) BOOL hasDeviceTimeZone;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
@property(nonatomic) BOOL hasIncludeSpokenNames;
@property(nonatomic) BOOL hasDistanceTraveled;
@property(nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
- (id)filterByBusinessTelephoneAtIndex:(unsigned int)arg1;
- (unsigned int)filterByBusinessTelephonesCount;
- (void)addFilterByBusinessTelephone:(id)arg1;
- (void)clearFilterByBusinessTelephones;
@property(nonatomic) BOOL hasIsFromAPI;
@property(nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property(nonatomic) BOOL hasSequenceNumber;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasInputLanguage;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
@property(readonly, nonatomic) BOOL hasSuggestionsPrefix;
@property(nonatomic) BOOL hasAllowABTestResponse;
@property(nonatomic) BOOL hasStructuredSearch;
@property(nonatomic) BOOL hasIncludeSuggestionsOnly;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(readonly, nonatomic) BOOL hasBusinessOptions;
@property(nonatomic) BOOL hasIncludeEntryPoints;
@property(readonly, nonatomic) BOOL hasZilchPoints;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasIsStrictMapRegion;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (unsigned int)filterByBusinessCategorysCount;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)clearFilterByBusinessCategorys;
@property(nonatomic) BOOL hasMaxBusinessReviews;
@property(nonatomic) BOOL hasIncludeBusinessCategories;
@property(nonatomic) BOOL hasIncludeBusinessRating;
@property(nonatomic) BOOL hasBusinessSortOrder;
@property(nonatomic) BOOL hasSessionGUID;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasResultOffset;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) BOOL hasIncludePhonetics;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned int additionalPlaceTypesCount;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(readonly, nonatomic) BOOL hasSearch;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned int)arg2;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)clearBusinessIDs;
@property(readonly, nonatomic) unsigned long long *businessIDs;
@property(readonly, nonatomic) unsigned int businessIDsCount;
- (void)setPlaceIDs:(long long *)arg1 count:(unsigned int)arg2;
- (long long)placeIDAtIndex:(unsigned int)arg1;
- (void)addPlaceID:(long long)arg1;
- (void)clearPlaceIDs;
@property(readonly, nonatomic) long long *placeIDs;
@property(readonly, nonatomic) unsigned int placeIDsCount;
- (void)dealloc;
- (id)initWithPlace:(id)arg1;

@end

