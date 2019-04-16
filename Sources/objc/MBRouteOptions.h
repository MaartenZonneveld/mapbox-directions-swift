#import <Foundation/Foundation.h>

#pragma mark - Specifying the Routing Profile

/**
 Options determining the primary mode of transportation for the routes.
 */
typedef NSString * MBDirectionsProfileIdentifier NS_EXTENSIBLE_STRING_ENUM;

/**
 The returned directions are appropriate for driving or riding a car, truck, or motorcycle.
 
 This profile prioritizes fast routes by preferring high-speed roads like highways. A driving route may use a ferry where necessary.
 */
extern MBDirectionsProfileIdentifier const MBDirectionsProfileIdentifierAutomobile;

/**
 The returned directions are appropriate for driving or riding a car, truck, or motorcycle.
 
 This profile avoids traffic congestion based on current traffic data. A driving route may use a ferry where necessary.
 
 Traffic data is available in [a number of countries and territories worldwide](https://docs.mapbox.com/help/how-mapbox-works/directions/#traffic-data). Where traffic data is unavailable, this profile prefers high-speed roads like highways, similar to `MBDirectionsProfileIdentifierAutomobile`.
 */
extern MBDirectionsProfileIdentifier const MBDirectionsProfileIdentifierAutomobileAvoidingTraffic;

/**
 The returned directions are appropriate for riding a bicycle.
 
 This profile prioritizes short, safe routes by avoiding highways and preferring cycling infrastructure, such as bike lanes on surface streets. A cycling route may, where necessary, use other modes of transportation, such as ferries or trains, or require dismounting the bicycle for a distance.
 */
extern MBDirectionsProfileIdentifier const MBDirectionsProfileIdentifierCycling;

/**
 The returned directions are appropriate for walking or hiking.
 
 This profile prioritizes short routes, making use of sidewalks and trails where available. A walking route may use other modes of transportation, such as ferries or trains, where necessary.
 */
extern MBDirectionsProfileIdentifier const MBDirectionsProfileIdentifierWalking;

/**
 A number that influences whether a route should prefer or avoid roadways or pathways of a given type.
 */
typedef double MBDirectionsPriority NS_TYPED_EXTENSIBLE_ENUM;

/**
 The priority level with which a route avoids a particular type of roadway or pathway.
 */
extern const MBDirectionsPriority MBDirectionsPriorityLow;

/**
 The priority level with which a route neither avoids nor prefers a particular type of roadway or pathway.
 */
extern const MBDirectionsPriority MBDirectionsPriorityDefault;

/**
 The priority level with which a route prefers a particular type of roadway or pathway.
 */
extern const MBDirectionsPriority MBDirectionsPriorityHigh;